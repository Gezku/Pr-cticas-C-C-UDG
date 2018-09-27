#include <stdio.h>
#include <string.h>

int main(){
/*Doble: Calcular el monto de pago que consiste en la inscripción más la primera mensualidad, de una persona que se
inscribe a la alberca olímpica de la Universidad de Guadalajara.  Si la persona es empleado de la universidad se le hará un descuento del 50% de lo
contrario se cobrara el pago completo.  Para calcular el pago se debe tomar en cuenta que la inscripción es de $100.00 y la mensualidad es de $150.00. */

    float inscripcion, mensualidad, descuento, total;
    inscripcion = 100.0;
    mensualidad = 150.0;
    descuento = 0.50;

    char esEmpleado[2];

    printf("Eres empleado de la universidad, si/no: ");
    scanf("%s", &esEmpleado);

    if(strcmp(esEmpleado, "si") == 0){
        total = inscripcion + mensualidad * descuento;
        printf("El total es %f", total);
    }else{
        total = inscripcion + mensualidad;
        printf("El total es %f", total);
    }



   return 0;
}
