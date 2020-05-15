#include <stdio.h>
#include <conio.h>

int	secuencial(int	numeros[], int	tam, int	x) {
    int comp = 0;
    for (int i = 0; i < tam; i++) {
        comp = i + 1;
        //printf("Comparacion: %d", comp);
        if (x == numeros[i]) {
            printf("Realizo %d comparacion|es para lograr encontrar el %d en la posicion %d \n", comp, numeros[i], i);
            //printf("El resultado es array[%d] \n", numeros[i]);
            //printf("\n");
            return	i;
        }
        
    }
    printf("Realizo %d comparaciones pero no encontro %d en ninguna posicion \n", comp, x);
    return	-1;
}


int main() {

    int arreglo[20] = { 10, 17, 6, 33, 5, 21, 42, 8, 3, 22, 15, 13, 1, 55, 50, 9, 18, 7, 25, 2 };
    
    /*for (int i = 0; i <= 55; i++) {
        if()
    }*/

    secuencial(arreglo, 20, 15);
    //printf("%d", secuencial(arreglo, 20, 20));
    secuencial(arreglo, 20, 20);

    secuencial(arreglo, 20, 10);




    getch();
    return 0;

}