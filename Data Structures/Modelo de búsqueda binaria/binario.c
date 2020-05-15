#include <stdio.h>
#include <conio.h>

int printArrayValues(int arr[], int tam){

    for(int i = 0 ; i <= tam;  i++){
        if(i  >= tam){
            printf("%d.", arr[i]);
        }else{
            printf("%d, ", arr[i]);
        }
        
    }
    printf("\n");
}

void quicksort(int arr[], int first, int last) {
    int i, j, pivot, temp;

    if (first < last) {
        pivot = first;
        i = first;
        j = last;

        while (i < j) {
            while (arr[i] <= arr[pivot] && i < last)
                i++;
            while (arr[j] > arr[pivot])
                j--;
            if (i < j) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        temp = arr[pivot];
        arr[pivot] = arr[j];
        arr[j] = temp;
        quicksort(arr, first, j - 1);
        quicksort(arr, j + 1, last);

    }
}

int	binaria	(int	numeros[],	int	tam,	int	x){	
    int	inicio	=	0;	
	int	fin	=	tam-1;
    int	medio;
    int comparaciones = 0;
    do {
        medio	=	(	inicio	+	fin	)	/	2	;	
        if( x == numeros[medio]){
            
            printf("Numero de comparaciones: %d \n", comparaciones);
            printf("Posicion donde se encuentra el valor buscado: %d \n", medio);
            printf("Numero buscado: %d", numeros[medio]);
            return 0;
            
        }	
        else if (x > numeros[medio]){
            inicio	=	medio	+	1;
            comparaciones = comparaciones + 1;
        }	
        else if	(x	<	numeros[medio])	{	
            fin	=	medio	-	1;
            comparaciones = comparaciones + 1;
        }	
    }while(	inicio	<=	fin	);
    printf("Este numero no existe en el arreglo");	
    return	-1;	
}		

int main(){

    int arreglo[20] = {10, 17, 6, 33, 5, 21, 42, 8, 3, 22, 15, 13, 1, 55, 50, 9, 18, 7, 25, 2};
    
    printf("Arreglo desordenado: ");
    printArrayValues(arreglo, 19);
    quicksort(arreglo, 0, 20);
    printf("Arreglo ordenado: ");
    printArrayValues(arreglo, 19);
    binaria(arreglo, 20, 55);
    getch();
    
    return 0;

}