/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


struct universidad{
	char nombre_universidad[20];
};

struct alumno{
	char nombre[20];
	int edad;
	struct universidad nombreUniversidad;
};


int main()
{
    struct alumno estudiante1;
    strcpy(estudiante1.nombre, "Fernando");
    estudiante1.edad = 29;
    strcpy(estudiante1.nombreUniversidad.nombre_universidad, "Universidad de Guadalajara");
    printf("Nombre de estudiante: %s \n", estudiante1.nombre);
    printf("Edad: %d \n", estudiante1.edad);
    printf("Universidad: %s", estudiante1.nombreUniversidad.nombre_universidad);
    getch();
    
    return 0;
}
