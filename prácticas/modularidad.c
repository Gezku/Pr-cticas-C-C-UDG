#include <stdio.h>

//
//1. Del archivo U3-a2 Modularidad.pdf”  leer la primera parte del tema  “Modularidad” el cual trata sobre las funciones. Este archivo se encuentra en la carpeta de recursos de la unidad.
//
//2. Resuelve el  problema que se presenta a continuación:
//
//Crear un programa para calcular las áreas y perímetros de algunas figuras geométricas.
//
//Se programará un menú principal que contenga las siguientes opciones:
//
//1. Áreas
//
//2. Perímetros
//
//3. Salir
//
//3. En la primera opción tendrá un submenú con las opciones: 1. Cuadrilátero 2. Trapecio 3. Esfera 4. salir
//
//4. En la segunda opción tendrá un submenú con las opciones: 1. Rectángulo 2. Triangulo 3. Circulo 4. Salir
//
//5. Realizar el cálculo para cada área y perímetro en una función, cada función preguntará al usuario los datos de entrada necesarios para calcular las áreas o perímetros correspondientes.

float areaCuatrilatero(float b, float a){

    return b * a;

}


float areaTrapecio(float b_mayor, float b_menor, float a){

    return (b_mayor + b_menor) * a / 2;

}

float areaEsfera(float r, float PI){

    return (r * r) * 4 * PI;

}

float perimetroRectangulo(float b, float a){

    return (b * 2) + (a * 2);

}

float perimetroTriangulo(float a, float b){
    return (a * 2) + b;

}

float perimetroCirculo(float r, float PI){
    return (r * 2 ) * PI;

}

int main(){

    int salida = 1;
    int menu_salida = 1;
    int menu_salida2 = 1;
    float base, altura, operacion, base_menor, base_mayor, radio;
    float PI = 3.14159;


    do{
        int opcion;

        printf("\n");
        printf("1. Area \n");
        printf("2. Perimetros \n");
        printf("3. salir \n");
        printf("\n");

        printf("Introducir una opcion: ");
        scanf("%d", &opcion);

        switch(opcion){

            case 1:
                do{
                   int opcion_menu1;


                    printf("\n");
                    printf("1. Cuadrilatero \n");
                    printf("2. Trapecio \n");
                    printf("3. Esfera \n");
                    printf("4. Salir \n");
                    printf("\n");

                    printf("Introducir una opcion: ");
                    scanf("%d", &opcion_menu1);

                    switch(opcion_menu1){
                       case 1:
                           printf("Introducir la base:  ");
                           scanf("%f", &base);
                           printf("Introducir la altura: ");
                           scanf("%f", &altura);
                           printf("El area del cuadrilatero es :  %f", areaCuatrilatero(base, altura));
                           break;
                        case 2:
                            printf("Introducir la base menor: ");
                            scanf("%f", &base_menor);
                            printf("Introducir la base mayor: ");
                            scanf("%f", &base_mayor);
                            printf("Introducir la altura: ");
                            scanf("%f", &altura);
                            printf("El area del trapecio es: %f", areaTrapecio(base_mayor, base_menor, altura));
                            break;
                        case 3:
                            printf("Introducir el radio de la esfera: ");
                            scanf("%f", &radio);
                            printf("El area de una esfera es: %f ", areaEsfera(radio, PI));
                            break;
                        case 4:
                            menu_salida  = 0;
                            break;

                    }

                }while( menu_salida  == 1);
                break;
            case 2:
                do{
                    int opcion_menu2;
                    printf("\n");
                    printf("1. Rectangulo  \n");
                    printf("2. Triangulo \n");
                    printf("3. Circulo \n");
                    printf("4. Salir \n");
                    printf("\n");
                    printf("\n");

                    printf("Introducir una opcion: ");
                    scanf("%d", &opcion_menu2);

                    switch(opcion_menu2){
                        case 1:
                            printf("Introducir la base del rectangulo: ");
                            scanf("%f", &base);
                            printf("Introducir la altura del rectangulo: ");
                            scanf("%f", &altura);
                            printf("El perimetro del rectangulo es %f", perimetroRectangulo(base, altura));
                            break;
                        case 2:
                            printf("Introducir la base del triangulo: ");
                            scanf("%f", &base);
                            printf("Introducir la altura del triangulo: ");
                            scanf("%f", &altura);

                            printf("El perimetro del triangulo es %f", perimetroTriangulo(altura, base));
                            printf("\n");
                            break;
                        case 3:
                            printf("Introducir el radio del circulo: ");
                            scanf("%f", &radio);

                            printf("El perimetro de un circulo es: %f", perimetroCirculo(radio,PI));
                            printf("\n");
                            break;
                        case 4:
                            salida = 1;
                            break;



                }




                }while(salida == 0);
                break;
            case 3:
                salida = 1;
                break;




        }


    }while(salida == 0);









    return 0;



}



