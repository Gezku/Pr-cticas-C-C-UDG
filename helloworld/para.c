#include <stdio.h>

int main(){


    int numero_a_multiplicar, hasta_que_numero, multiplicacion;

    printf("Que numero quieres multiplicar: ");
    scanf("%d", &numero_a_multiplicar);

    printf("Hasta que numero quieres multiplicar: ");
    scanf("%d", &hasta_que_numero);

    for(int i = 1; i <= hasta_que_numero; i++ ){
        multiplicacion = numero_a_multiplicar * i;
        printf("%d x %d = %d", numero_a_multiplicar, i, multiplicacion );
        printf("\n");

    }


    return 0;




}
