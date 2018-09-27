#include <stdio.h>

int main( ) {

    int codigo;


    printf("Codigo del empleado: ");
    scanf("%i", &codigo);

    char* nombre_del_empleado;
    printf("Nombre del empleado: ");
    scanf("%s", &nombre_del_empleado);

    int horas_trabajadas = 8;
    int horas_trabajadas_extra;

    printf("Horas extras trabajadas: ");
    scanf("%i", &horas_trabajadas_extra);

    float sueldo_por_hora = 125.50;
    float sueldo_por_hora_extra = 251.0;
    float impuesto_sobre_la_renta = 0.03;
    float impuesto_del_imss = 0.047;

    float impuestos_totales = sueldo_por_hora_extra + impuesto_del_imss;

    float resultado;


    if(horas_trabajadas_extra == 0){

       resultado = (horas_trabajadas * sueldo_por_hora) * impuestos_totales;
       printf("El resultado es: %f", resultado);


    }else{
        resultado = (horas_trabajadas * sueldo_por_hora) + (horas_trabajadas_extra * sueldo_por_hora_extra) * impuestos_totales;
        printf("El resultado es: %f", resultado);

    }



    return 0;
}
