#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int cola[MAX];
int final = -1;
int frente = -1;

//Esta función sirve para insertar al final de la cola
void insertar()
{
    int agregar_elemento_a_cola;
    if (final == MAX - 1)
    {
        printf("La cola esta llena, esta ocurriendo un overflow \n"); //Si la cola se llena ocurre un overflow o un desbordamiento, cambiar MAX a un valor menor de 50 para comprobar
    }
    else
    {
        if (frente == -1)
        {
            //La cola esta vacía inicialemnte, ya que el frente inicialmente es -1
            frente = 0;
        }
        printf("Elemento que quiere agregar a la cola : ");
        scanf("%d", &agregar_elemento_a_cola);
        final = final + 1;
        cola[final] = agregar_elemento_a_cola;
    }
}

//Esta funcion borra los elementos desde frente
void eliminar()
{
    if (frente == -1 || frente > final)
    {
        printf("La cola esta llena, esta ocurriendo un overflow \n");
    }
    else
    {
        printf("Se ha eliminado el elemneto de frente : %d\n", cola[frente]);
        frente = frente + 1;
    }
}

//Imprimimos todos los elementos de la cola..
void imprimir(){
    int i;
    if (frente == -1)
    {
        printf("La cola esta vacia, agregue elementos \n");
    }
    else
    {
        printf("Cola impresa : \n");
        for (i = frente; i <= final; i++)
        {
            printf("%d ", cola[i]);
        }
        printf("\n");
    }
}


int main()
{
    int opcion;
    while (1)
    {
        printf("1 ) Insertar un elemento a la cola\n");
        printf("2 ) Borrar un elemento de la cola \n");
        printf("3 ) Imprimir todos los elementos de la cola\n");
        printf("4 ) Salir del menu \n \n");
        printf("Por favor, ingrese una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            insertar();
            break;
        case 2:
            eliminar();
            break;
        case 3:
            imprimir();
            break;
        case 4:
            exit(1);
        default:
            printf("Esta opcion no existe, por favor, profesor, escriba otra \n");
        }
    }
    return 0;
}

