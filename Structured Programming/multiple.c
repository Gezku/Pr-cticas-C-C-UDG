#include <stdio.h>

int main(){

    int opcion;

    float altura, base, area, radio, medida_lado, PI;

    PI = 3.14159;

    printf("\n");
    printf("1. Area de un triangulo \n");
    printf("2. Area de un rectangulo \n");
    printf("3. Area de un circulo \n");
    printf("4. Area de un cubo \n");
    printf("5. Area de un una esfera \n");
    printf("6. Salir");
    printf("\n");
    printf("\n");

    printf("Introducir la opcion: ");
    scanf("%d", &opcion);




    switch( opcion ){
    case 1:
        printf("Introducir la base: ");
        scanf("%f", &base);
        printf("Introducir la altura: ");
        scanf("%f", &altura);
        area = (base * altura) / 2;
        printf("El area de un triangulo es: %f", area);
        break;

    case 2:
        printf("Introducir la base: ");
        scanf("%f", &base);
        printf("Introducir la altura: ");
        scanf("%f", &altura);
        area = base * altura;
        printf("El area de un rectangulo es: %f", area);
        break;

    case 3:
        printf("Introducir el radio: ");
        scanf("%f", &radio);
        area = (radio * radio) * PI;
        printf("El area de un circulo es: %f", area);
        break;
    case 4:
        printf("Introducir la medida de un lado del cubo: ");
        scanf("%f", &medida_lado);
        area = (medida_lado * medida_lado) * 6;
        printf("El area de un cubo es: %f", area);
        break;
    case 5:
        printf("Introducir el radio de la esfera: ");
        scanf("%f", &radio);
        area = (radio * radio) * 4 * PI;
        printf("El area de una esfera es: ", area);
    case 6:
        break;
}




    return 0;

}
