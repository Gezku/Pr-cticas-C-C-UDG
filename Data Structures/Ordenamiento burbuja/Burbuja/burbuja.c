#include <stdio.h>


void burbuja(int array[], int tam) {
    int i, j, temp;
    for (i = tam - 1; i > 0; i--) {
        for (j = 0; j < i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

            }
        }
        
     }
}

int main() {
    int arregloNumerosEnteros[6] = {15, 12, 65, 45, 1, 2};
    printf("Arreglo de numeros enteros: ");

        for (int i = 0; i <= 5; i++) {
            if (i > 4) {
                printf("%d", arregloNumerosEnteros[i]);
            }
            else {
                printf("%d, ", arregloNumerosEnteros[i]);
            }
        }

        printf("\n");
    burbuja(arregloNumerosEnteros, 6);
    printf("Ordenamiento burbuja: ");
    for (int i = 0; i <= 5; i++) {
        if (i < 5) {
            printf("%d, ", arregloNumerosEnteros[i]);

        }
        else {
            printf("%d", arregloNumerosEnteros[i]);
        }
        
    
    }



}