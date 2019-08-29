#include <stdio.h>

#define fila 3
#define columna 3

int main(int arg, const char *arvg[]) {

    int matriz[fila][columna];
    int matriz2[fila][columna];
    int i, j;


//Llenar el arreglo
    for (int i = 0; i < fila; ++i) {
        for (int j = 0; j < columna; ++j) {
            printf("Introduce los valores de la matriz:  ");
            scanf("%d", &matriz[i][j]);
        }
    }

    int suma = 0;
    for (int i = 0; i < fila; ++i) {
        for (int j = 0; j < columna; ++j) {
            suma += matriz[i][j];

        }

    }
    printf(" El resultado de la suma de los elementos de la matriz: %d \n", suma);


    return 0;
}
