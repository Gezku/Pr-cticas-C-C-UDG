#include <stdio.h>
#include <conio.h>





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


void printArr(int arr[], int length, int lenght2, char msg[]) {
    printf("%s", msg);
    for (int i = 0; i <= length; i++) {
        if (i > lenght2) {
            printf("%d.", arr[i]);
        }
        else {
            printf("%d, ", arr[i]);
        }
    }
}


int main(){

   int arr[13] = { 8, 13, 6, 16, 2, 11, 9, 5, 1, 7, 15, 4, 10 };

   printArr(arr, 12, 11, "Valores iniciales: ");

   printf("\n");
    
   quicksort(arr, 0,13 );

   printArr(arr, 12, 11, "Valores ordenados: ");
   
   getch();

	return 0;
}