#include <stdio.h>

int main(){

    int decremento, factorial;

    factorial = 7;
    decremento = 6;


    do {

       factorial = factorial * decremento;

       decremento = decremento - 1;



    }while(decremento >= 1);


    printf("%d", factorial);





    return 0;




}
