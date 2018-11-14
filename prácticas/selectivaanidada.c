#include <stdio.h>

int main(){

    int calificacion;

    printf("Introducir la calificacion: ");
    scanf("%d", &calificacion);
//
//    if( calificacion >= 90 && calificacion <= 100){
//        printf("Excelente");
//    }else if(calificacion <= 89 ){
//        printf("Muy bien");
//    }else if(calificacion >= 70 ){
//        printf("Regular");
//    }


    if(calificacion <= 0 || calificacion > 100){
        printf("Error...");
    }else if(calificacion <= 59){
        printf("Malo");
    }else if(calificacion <= 69){
        printf("Regular");
    }else if(calificacion <= 79){
        printf("Bien");
    }else if(calificacion <= 89){
        printf("Muy bien");
    }else if(calificacion <= 100){
        printf("Excelente");
    }


    return 0;

}
