//Trabajo hecho por Rodrigo Gómez Paredes, Angel David Vazquez Mayo y Abel Israel

#include <ctype.h> // toupper
#include <time.h>
#include <stdio.h>  // printf, scanf
#include <stdlib.h> // rand

// Cosas que puedes modificar c:
#define COLUMNAS 8
#define FILAS 8
#define CASILLA_OCULTA ' '
#define MINA 'M'
#define CANTIDAD_MINAS 47 // Si colocas más minas que la cantidad de espacios disponibles (COLUMNAS * FILAS), fallará

// Cosas que no tendrías que modificar a menos que quieras adaptarlo a tus ideas :v
int conteo = 0;
void generarMinas(char minas[FILAS][COLUMNAS])
{
    int x = 0, y = 0;
    for (int i = 0; i < CANTIDAD_MINAS; i++)
    {
        x = (rand() % (FILAS - 1));
        y = (rand() % (COLUMNAS - 1));
        minas[x][y] = MINA;
    }
}

void imprimirTablero(char tablero[FILAS][COLUMNAS])
{
    char marcadorF = 'A';
    int marcadorC = 0;
    // imprimir tablero
    printf("  ");
    for (int i = 0; i < COLUMNAS; i++)
    {
        printf(" %i ", marcadorC);
        marcadorC++;
    }
    printf("\n");
    for (int i = 0; i < FILAS; i++)
    {
        printf("%c ", marcadorF);
        for (int j = 0; j < COLUMNAS; j++)
        {
            printf("[%c]", tablero[i][j]);
        }
        printf("\n");
        marcadorF++;
    }
}

void inicializarTablero(char tablero[FILAS][COLUMNAS])
{
    for (int i = 0; i < FILAS; i++)
    {
        for (int j = 0; j < COLUMNAS; j++)
        {
            tablero[i][j] = CASILLA_OCULTA;
        }
    }
}

int contarMinasAlrededor(char tablero[FILAS][COLUMNAS], int fila, int columna)
{
    int minasAlrededor = 0;

    // Recorremos las casillas adyacentes a la casilla seleccionada
    for (int i = fila - 1; i <= fila + 1; i++)
    {
        for (int j = columna - 1; j <= columna + 1; j++)
        {
            // Verificamos que la casilla esté dentro del tablero y que no sea la propia casilla seleccionada
            if (i >= 0 && i < FILAS && j >= 0 && j < COLUMNAS && !(i == fila && j == columna))
            {
                // Si hay una mina en la casilla, aumentamos el contador
                if (tablero[i][j] == MINA)
                {
                    minasAlrededor++;
                }
            }
        }
    }

    return minasAlrededor;
}
void descubrirCasillasVecinas(char tablero[FILAS][COLUMNAS], char tablero_usuario[FILAS][COLUMNAS], int fila, int columna)
{
    // Recorremos las casillas adyacentes a la casilla seleccionada
    for (int i = fila - 1; i <= fila + 1; i++)
    {
        for (int j = columna - 1; j <= columna + 1; j++)
        {
            // Verificamos que la casilla esté dentro del tablero y que no sea la propia casilla seleccionada
            if (i >= 0 && i < FILAS && j >= 0 && j < COLUMNAS && !(i == fila && j == columna))
            {
                // Si la casilla es un 0 y aún no ha sido descubierta, la descubrimos y buscamos sus casillas vecinas
                if (tablero[i][j] == ' ' && tablero_usuario[i][j] == CASILLA_OCULTA)
                {
                    tablero_usuario[i][j] = ' ';
                    descubrirCasillasVecinas(tablero, tablero_usuario, i, j);
                }
                // Si la casilla no es un 0, simplemente la descubrimos
                else if (tablero_usuario[i][j] == CASILLA_OCULTA)
                {
                    tablero_usuario[i][j] = tablero[i][j];
                }
            }
        }
    }
}

int main()
{
    srand(time(NULL)); // Inicializa los números aleatorios para que siempre varíe el orden de las minas

    char tablero[FILAS][COLUMNAS];
    char tablero_usuario[FILAS][COLUMNAS];

    inicializarTablero(tablero);
    inicializarTablero(tablero_usuario); // Inicializar tablero con espacios
    generarMinas(tablero);               // Aquí se generan aleatoriamente las minas

    imprimirTablero(tablero_usuario); // Imprimir tablero inicial

    while (1)
    {

        if (conteo >= (((FILAS * COLUMNAS)) - (CANTIDAD_MINAS)))
        {
            printf("Felicidades, has completado el juego\n");
            return 0;
        }

        printf("%d \n", conteo);
        // Pedir al usuario que revele una casilla
        int fila, columna;
        printf("Ingresa la fila y la columna de la casilla que quieres revelar (ej. A 0): ");
        scanf("%lc %d", &fila, &columna);
        printf("\n");
        // Convertir la fila ingresada por el usuario a un índice de array
        fila = toupper(fila) - 'A';

        // Verificar si la casilla seleccionada es una mina
        if (tablero[fila][columna] == MINA)
        {
            for (int i = 0; i < (fila * columna); i++)
            {
                for (int j = 0; j < (fila * columna); j++)
                {
                    if (tablero[fila][columna] == 'M')
                    {
                        tablero_usuario[fila][columna] = 'M';
                         
                    }
                }
            }

            printf("¡Has perdido!\n");
            printf("Estas eran las posiciones de las minas\n");
            imprimirTablero(tablero);
            break;
        }
        if (tablero_usuario[fila][columna] == ' ')
        {
            conteo++;
        }
        // Contar las minas alrededor de la casilla seleccionada
        int minasAlrededor = contarMinasAlrededor(tablero, fila, columna);

        // Si hay 0 minas alrededor, descubrir automáticamente las casillas vecinas

        // Si hay minas alrededor, solo descubrir la casilla seleccionada

        tablero_usuario[fila][columna] = minasAlrededor + '0';

        // Imprimir el tablero actualizado
        imprimirTablero(tablero_usuario);
    }

    return 0;
}

