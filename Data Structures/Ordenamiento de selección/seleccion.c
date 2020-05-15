#include <stdio.h>
#include <conio.h>


void seleccion(int array[], int tam) {
    int menor, aux, i, j;
    for (i = 0; i < tam - 1; i++) {         //Primera iteración 
        menor = i;                         // menor = 0, i = 0;
        for (j = i + 1; j < tam; j++) {    // j = 1 ;    
            if (array[menor] > array[j])    //array[menor] = 13  > array[j] = 47 | falso
                menor = j;                  //esto no ocurre porque es falso
        }
        aux = array[menor];                 //aux = 13
        array[menor] = array[i];            //array[menor] = 13
        array[i] = aux;                     //array[i] = 13
    }
}

int main() {

	int arreglo[6] = { 13, 47, 5, 75, 2, 17 };

    printf("Ordenamiento de seleccion: \n");

    printf("Valores iniciales: ");

    for (int i = 0; i <= 5; i++) {
        if (i > 4) {
            printf("%d.", arreglo[i]);
        }
        else {
            printf("%d, ", arreglo[i]);
        }
       
    }
    printf("\n");
    
    seleccion(arreglo, 6);

    
    
    

    printf("Valores ordenados: ");

    for (int i = 0; i <= 5; i++) {

        if (i > 4) {
            printf("%d.", arreglo[i]);
        }
        else {
            printf("%d, ", arreglo[i]);
        }
    }
    

	getch();
	return 0;

}