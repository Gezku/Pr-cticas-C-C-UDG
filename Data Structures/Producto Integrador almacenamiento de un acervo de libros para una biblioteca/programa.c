
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    char *nombre;
    char *clavelibro;
    char *numpags;
    char *nombreautor;
    char *nombreeditorial;
    int data;
    struct Node *next;
};

void printList(struct Node *n)
{
    while (n != NULL)
    {
        printf(" Clave libro: %s \n Titulo del libro: %s\n Numero de paginas: %s \n Nombre autor: %s  \n Nombre de la editorial: %s  \n", n->clavelibro, n->nombre, n->numpags, n->nombreautor, n->nombreeditorial);
        printf("....................................\n");
        n = n->next;
    }
}

void deleteNode(struct Node **head_ref, int key)
{
    struct Node *temp = *head_ref, *prev;

    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // buscar la key o llave que en este caso es data para  borrar el último elemento.
    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return;

    prev->next = temp->next;

    free(temp); // liberar memoria q se asigno dinamicamente
}

void push(struct Node **head_ref, int data, char *clavelibro, char *nombre, char *numpags, char *nombreautor, char *nombreeditorial)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    //Agregando nodos  de aquí...
    new_node->data = data;
    new_node->clavelibro = malloc(20 * sizeof(char));
    strcpy(new_node->clavelibro, clavelibro);

    new_node->nombre = malloc(20 * sizeof(char));
    strcpy(new_node->nombre, nombre);

    new_node->numpags = malloc(20 * sizeof(char));
    strcpy(new_node->numpags, numpags);

    new_node->nombreautor = malloc(50 * sizeof(char));
    strcpy(new_node->nombreautor, nombreautor);

    new_node->nombreeditorial = malloc(150 * sizeof(char));
    strcpy(new_node->nombreeditorial, nombreeditorial);

    //hasta aquí;

    new_node->next = (*head_ref);

    (*head_ref) = new_node;
}



int main()
{
    struct Node *head = NULL;

    char nombre[20];
    char clavelibro[20];
    char numpags[20];
    char nombreautor[50];
    char nombreeditorial[150];
    int data = 1;

    void enteringDta(){
        printf("Insertar la clave del libro: ");
        fgets(clavelibro, sizeof(clavelibro), stdin);

        printf("Insertar titulo del libro: ");
        fgets(nombre, sizeof(nombre), stdin);
        printf("Insertar el numero paginas: ");
        fgets(numpags, sizeof(numpags), stdin);
        printf("Insertar nombre del autor: ");
        fgets(nombreautor, sizeof(nombreautor), stdin);
        printf("Insertar nombre de la editorial: ");
        fgets(nombreeditorial, sizeof(nombreeditorial), stdin);

        push(&head, data, clavelibro, nombre, numpags, nombreautor, nombreeditorial);
        printList(head);
    }

    char option[20];
    int o;

    do
    {

        printf("1) Insertar libro\n");
        printf("2) Consultar libros \n");
        printf("3) Borrar libro\n");
        printf("4) Salir\n");

        printf("Insertar una opcion:");
        fgets(option, 20, stdin); // Usamos fgets para no dejar una new line en el buffer
        o = atoi(option);         // Convertimos el char a int de opciones

        switch (o)
        {
        case 1:
            enteringDta();
            break;
        case 2:
            printf("Consultar libros\n");
            printList(head);
            break;
        case 3:
            printf("Borrando\n");
            deleteNode(&head, 1);
            break;
        case 4:
            printf("Saliendo\n");
            break;
        default:
            printf("Leave");
            break;
        }

    } while (o != 4);

    return 0;
}
