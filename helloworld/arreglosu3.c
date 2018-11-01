#include <stdio.h>
#include <string.h>
/*

Instrucciones

Crea un arreglo de tipo entero, pregunta al usuario cuántos valores enteros  va a capturar, esa cantidad será la longitud del arreglo.  Tener un menú con las siguientes opciones:

1. Capturar valores

2. Ordenar valores

3. imprimir valores originales

4. imprimir valores ordenados

5. Salir

Cuando se oprima la opción de salir deberá preguntar al usuario si desea salir o no antes de salir del programa, mientras el usuario no desee salir regresar al menú.


*/



int main(){


    int salida;
    int valoresCapturar = 0;
    int arreglo[valoresCapturar];
    int arregloDesordenado[valoresCapturar];
    int temp;
    char respuesta[2];


    do{
        int opcion;
        salida = 0;

        printf("\n");

        printf("1. Capturar valores \n");

        printf("2. Ordenar valores \n");

        printf("3. imprimir valores originales \n");

        printf("4. imprimir valores ordenados \n");

        printf("5. Salir\n");

        printf("\n");

        printf("Introducir una opcion: ");
        scanf("%d", &opcion);

        switch(opcion){
            case 1:
                printf("Insertar los valores: ");
                scanf("%d", &valoresCapturar);
                for(int x = 0; x < valoresCapturar; x++){

                    printf("Introducir el valor %d:", x + 1);
                    scanf("%d", &arreglo[x]);
                    arregloDesordenado[x] = arreglo[x];
                }


                break;
            case 2:
                for (int i = 0; i < valoresCapturar; i++){
                        for (int j = 0; j < (valoresCapturar - i - 1); j++){

                            if (arreglo[j] > arreglo[j + 1]){
                                temp = arreglo[j];
                                arreglo[j] = arreglo[j + 1];
                                arreglo[j + 1] = temp;
                                }
                            }
                        }

                printf("Los valores han sido ordenados...");


                break;
            case 3:


                printf("Valores originales... \n");
                for(int i = 0; i < valoresCapturar; i++){
                    printf("%d .- %d \n", i, arregloDesordenado[i]);
                }
                break;
            case 4:
                 printf("Valores ordenados...\n");
                        for (int i = 0; i < valoresCapturar; i++)
                        {
                            printf("%d\n", arreglo[i]);
                        }
                        break;
            case 5:
                printf("Desea salir? si/no ");
                scanf("%s", &respuesta);

                if(!strcmp(respuesta, "si")){
                    salida = 5;
                }else if(!strcmp(respuesta, "no")){
                    salida = 0;
                }else{
                    printf("No entendi que escribio...");
                }


                break;

            default:
                printf("Esa opcion no existe");
                break;

        }





    }while (salida != 5);

    return 0;
}
