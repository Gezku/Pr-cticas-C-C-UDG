#include <stdio.h>
#include <conio.h>




int imprimirArreglo(int length , int arreglo[]){
    length = length -1;
    printf("---------------------------------------\n");
    printf("Tu arreglo seleccionado es: ");
    for(int i = 0; i <= length; i++){
        if(length == 0){
            printf("[%d]", arreglo[i]);
        }

        if( length > 1 && i == 0){
            printf("[%d, ", arreglo[i]);
        }else if(length > 0 && i > 0 && i != length){
            printf("%d, ", arreglo[i]);
        }

        if(i == length && 0 != length){
         
            printf("%d]", arreglo[i]);
        
        }
    }
    printf("\n");
    
}

int obtenerDatosArreglo(int length, int arreglo[]){
    printf("La longitud del arreglo es: %d \n", length);
    
    for(int i = 0; i < length; i++){
        printf("Introducir el valor del indice %d: ", i);
        scanf("%d", &arreglo[i]);
    }

    // imprimirArreglo(length, arreglo);
    

}

int menu(){
    printf("----------Menu------------\n");
    printf("1) Ordenamiento burbuja \n");
    printf("2) Ordenamiento insercion\n");
    printf("3) Ordenamiento seleccion\n");
    printf("4) Ordenamiento quickSort\n");
    printf("5) Busqueda secuencial\n");
    printf("6) Busqueda binaria\n");
    printf("7) Salir\n");
    return 0;
}

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


void seleccion(int array[], int tam) {
    int menor, aux, i, j;
    for (i = 0; i < tam - 1; i++) {          
        menor = i;                         
        for (j = i + 1; j < tam; j++) {        
            if (array[menor] > array[j])    
                menor = j;                  
        }
        aux = array[menor];                 
        array[menor] = array[i];            
        array[i] = aux;                     
    }
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

int	secuencial(int	numeros[], int	tam, int	x) {
    int comp = 0;
    for (int i = 0; i < tam; i++) {
        comp = i + 1;
        if (x == numeros[i]) {
            printf("Realizo %d comparacion|es para lograr encontrar el %d en la posicion %d del arreglo\n", comp, numeros[i], i);
            return	i;
        }
        
    }
    printf("Realizo %d comparaciones pero no encontro %d en ninguna posicion \n", comp, x);
    return	-1;
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
    int length;
    
    
    printf("Introducir la longitud del arreglo: ");
    scanf("%d", &length);
    int array[length];
    
    obtenerDatosArreglo(length, array);
    
    int valorBuscar;
    //Aquí nos quedamos por el momento
  


    int choice;

    do
{
    imprimirArreglo(length, array);
    menu();
    
    scanf("%d", &choice);
    
    switch(choice)
    {
        case 1:
            burbujaMejorada(array, length);
            imprimirArreglo(length, array);
            break;
        case 2:
            insercion(array, length);
            imprimirArreglo(length, array);
            break;
        case 3:
            seleccion(array, length);
            imprimirArreglo(length, array);
            break;
        case 4:
            quicksort(array, 0, length);
            imprimirArreglo(length, array);
            break;
        case 5:
            printf("Insertar el valor a buscar: ");
            scanf("%d", &valorBuscar);
            secuencial(array, length, valorBuscar);
            break;

        case 6:
            quicksort(array, 0, length);
            printf("Insertar el valor a buscar: ");
            scanf("%d", &valorBuscar);
            binaria(array,length, valorBuscar );
            printf("binaria\n");
            break;
        case 7:
            printf("salida \n");
            break;

        default:printf("Opcion equivocada");
        break;
    }
    
    }while(choice !=7);
 

    return 0;
}