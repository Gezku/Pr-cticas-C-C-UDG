#include <stdio.h>




//
//ntroducción
//
//En esta actividad retomaremos el concepto de funciones tanto las funciones que regresan valor como funciones que no regresan valor haciendo uso de los parámetros para pasarle valores a la función.
//
//Uno de los criterios usados por el programador para decidir si una función tendrá parámetros o no es identificar en donde se piden los datos de entrada.  Si los datos de entrada están fuera de la función, dicha función deberá tener parámetros de lo contrario la función no necesitará parámetros porque los datos de entrada están dentro de ella misma.
//
//Ahora se retomará los conceptos vistos en la actividad anterior para aplicar parámetros en las funciones.
//
//Instrucciones
//
//1. Retoma el archivo U3-a2 Modularidad.pdf   y lee la segunda parte del tema  “Modularidad” el cual trata sobre los parámetros. Este archivo se encuentra en la carpeta de recursos de la unidad.
//
//2. A continuación, re-plantea y re-diseña el problema de la actividad 2 de esta unidad para realizar un programa nuevo. El planteamiento será el mismo, solamente cambiará que los datos de entrada se pedirán al inicio, antes de entrar al menú principal, esto para usar parámetros en cada una de las funciones re-diseñadas.
//
//3. A continuación se vuelve a describir el planteamiento del problema y en negritas se encuentran los cambios realizados con respecto a la actividad anterior:
//
//Crear un programa para calcular las áreas y perímetros de algunas figuras geométricas
//
//Los datos para el cálculo de las área y los perímetros (datos de entrada) se pedirán al usuario antes de entrar al menú principal
//
//Se programará un menú principal que contenga las siguientes opciones:
//
//1. Áreas
//
//2. Perímetros
//
//3. Salir
//
//4. En la primera opción tendrá un submenú con las opciones: 1. Cuadrilátero 2. Trapecio 3. Esfera 4. salir
//
//5. En la segunda opción tendrá un submenú con las opciones: 1. Rectángulo 2. Triangulo 3. Circulo 4. Salir
//
//6. Realizar el cálculo de cada área y perímetro en una función con paso de parámetros.
//
//7. Todas las opciones de salir deberán preguntar primero si realmente desea salir del programa o no. Mientras el usuario no eliga salir del programa regresar al menú.
//
//8. Deberás realizar el diagrama de flujo, el pseudocódigo y el programa en el lenguaje C, empaquetar todo (un documento que contenga los diagramas y el pseudocódigo así como el archivo fuente .c, el archivo objeto .o y  el archivo ejecutable .exe de tus programas) en un ZIP y enviarlo a tu asesor al “Buzón de entregas” para que lo evalúe y lo retroalimente.















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



