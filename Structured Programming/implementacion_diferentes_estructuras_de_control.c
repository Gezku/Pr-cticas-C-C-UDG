#include <stdio.h>
#include <stdlib.h>

int main(){


    int opcion, codigo_postal, telefono, edad, salida;
    char nombre_empresa[20];
    char actividad[20];
    char domicilio[20];




    do{
        int opcion;
        salida = 0;



        printf("\n");
        printf("1. Capturar datos de la empresa. \n");
        printf("2. Imprimir datos de la empresa. \n");
        printf("3. Capturar las edades de los empleados. \n");
        printf("4. Salir.\n");

        printf("Introducir una opcion: ");
        scanf(" %d", &opcion);


        switch(opcion){
            case 1:
                printf("Nombre de la empresa: ");
                scanf(" %s", &nombre_empresa);

                printf("Actividad de la empresa: ");
                scanf(" %s", &actividad);

                printf("Telefono de la empresa: ");
                scanf(" %d", &telefono);

                printf("Codigo postal de la empresa: ");
                scanf(" %d", &codigo_postal);



               break;
            case 2:
                printf("El nombre de la empresa es: %s \n", nombre_empresa);
                printf("La actividad de la empresa es: %s \n", actividad);
                printf("El telefono de la empresa es: %d \n", telefono);
                printf("El codigo postal de la empresa es: %d \n", codigo_postal);
                break;


            case 3:
                printf("Introducir la edad de los empleados: ");
                scanf(" %d", &edad);
                printf("La edad es: %d\n", edad);

                if(edad <= 18 || edad >= 65){
                    printf("Edad erronea");
                }else if(edad <= 22){
                    printf("Hay 10 empleados menores de 22 anyos \n");
                }else if( edad <= 50){
                    printf("Hay 10 empleados menores 50 anyos\n");
                }

                break;
            case 4:
                salida = 1;
                break;


        }









    }while(salida != 1);















    return 0;


}
