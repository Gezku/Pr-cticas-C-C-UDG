#include <stdio.h>
int main()
{

    int codigo_del_alumno;
    char* nombre_del_alumno;
    float calificacion_materia_1, calificacion_materia_2, calificacion_materia_3, calificacion_materia_4, promedio;
   // printf() displays the string inside quotation
    printf("Introducir codigo del alumno: ");
    scanf("%i", &codigo_del_alumno);
    printf("Introducir el nombre del alumno: ");
    scanf("%s", &nombre_del_alumno);
    printf("Calificacion materia 1: ");
    scanf("%f", &calificacion_materia_1);
    printf("Calificacion materia 2: ");
    scanf("%f", &calificacion_materia_2);
    printf("Calificacion materia 3: ");
    scanf("%f", &calificacion_materia_3);
    printf("Calificacion materia 4: ");
    scanf("%f", &calificacion_materia_4);

    promedio = (calificacion_materia_1 + calificacion_materia_2 + calificacion_materia_3 + calificacion_materia_4) / 4;



    if(promedio >= 9.5){
        //Imprimir en pantalla el código del alumno, el nombre del alumno y el promedio del alumno
        printf("Codigo del alumno: %i \n", codigo_del_alumno);
        printf("Nombre del alumno: %s \n", &nombre_del_alumno);
        printf("Promedio del alumno: %f", promedio);
    }



   return 0;
}
