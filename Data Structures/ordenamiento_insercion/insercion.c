#include <stdio.h>


void insercion(int array[], int tam) {
    int i, j, aux;
    for (i = 1; i < tam; i++) {
        aux = array[i];
        j = i - 1;
        while ((j >= 0) && (aux < array[j])) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = aux;
    }
}

int main(){

   int arr[7] = { 8, 4, 9, 7, 2, 15, 1};

   printf("Valores iniciales: ");
   for (int j = 0; j <= 6; j++) {
       if (j > 5) {
           printf("%d.", arr[j]);
       }
       else {
           printf("%d, ", arr[j]);
       }
   }

   printf("\n");
    
   insercion(arr, 7);

   printf("Valores resultantes: ");
    for (int i = 0; i <= 6; i++) {
        if (i > 5) {
            printf("%d. ", arr[i]);
        }
        else {
            printf("%d, ", arr[i]);
        }
    }

   // printf("hola mundo");


	return 0;
}