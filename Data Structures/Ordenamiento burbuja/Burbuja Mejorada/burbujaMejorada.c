#include <stdio.h>



void burbujaMejorada(int array[], int tam) {
    int i = tam - 1, j, temp, bandera = 0;
    while (i > 0 && !bandera) {
        bandera = 1;
        for (j = 0; j < i; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                bandera = 0;
            }
        }
        i--;
    }
}




int main() {
	
    int arregloNumerosEnteros[6] = { 15, 12, 65, 45, 1, 2 };
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
    burbujaMejorada(arregloNumerosEnteros, 6);

    printf("Ordenamiento burbuja mejorada: ");

    for (int i = 0; i <= 5; i++) {
        if (i > 4) {
            printf("%d", arregloNumerosEnteros[i]);
        }
        else {
            printf("%d, ", arregloNumerosEnteros[i]);
        }
    }


	return 0;

}