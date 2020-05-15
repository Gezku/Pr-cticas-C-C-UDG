#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100

int pila[LIMIT]; // Pila con el limite
int tope;
int i;
int opcion;
void insertar();
void eliminarUltimo();
void imprimirValoresPila();

int main()
{

    tope = -1; // inicializar la pila para indicar que esta vacía
    do
    {
        printf("1. insertar\n2. eliminar\n3. verTope \n4. salir\n\n");
        printf("Insertar una opcion:");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            insertar();
            break;
        case 2:
            eliminarUltimo();
            break;
        case 3:
            imprimirValoresPila();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Lo siento, profesor, este comando no existe\n");
            break;
        }
    } while (opcion != 4);
    return 0;
}
void insertar()
{
    int elemento;
    if (tope == LIMIT - 1)
    {
        printf("pila vacia\n");
    }
    else
    {
        printf("Digitar el elemento que se busca insertar:");
        scanf("%d", &elemento);
        tope++;
        pila[tope] = elemento;
    }
}
void eliminarUltimo()
{
    int elemento;
    if (tope == -1)
    {
        printf("pila vacia\n");
    }
    else
    {
        elemento = pila[tope];
        printf("El elemento eliminado es %d\n", pila[tope]);
        tope--;
    }
}
void imprimirValoresPila()
{
    if (tope == -1)
    {
        printf("pila vacia\n");
    }
    else if (tope > 0)
    {
        printf("Los elementos en la pila son:\n");
        for (i = tope; i >= 0; i--)
        {
            printf("%d\n", pila[i]);
        }
    }
}
