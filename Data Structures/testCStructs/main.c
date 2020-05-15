
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
  char *nombre;
  char *edad;
  char *numerocds;
  char *tituloDiscos;
  int data;
  struct Node *next;
};

void printList(struct Node *n)
{
  while (n != NULL)
  {
    printf(" Nombre del cantante o grupo: %s\n Edad: %s \n Numero de albums o cds %s  \n Nombre de albums: %s  \n",n->nombre, n->edad, n->numerocds, n->tituloDiscos);
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

void push(struct Node **head_ref, int data, char *nombre, char *edad, char *numerocds, char *tituloDiscos)
{
  struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

  //Agregando nodos  de aquí...
  new_node-> data = data;

  new_node->nombre = malloc(20 * sizeof(char));
  strcpy(new_node->nombre, nombre);

  new_node->edad = malloc(20 * sizeof(char));
  strcpy(new_node->edad, edad);

  new_node->numerocds = malloc(20 * sizeof(char));
  strcpy(new_node->numerocds, numerocds);

  new_node->tituloDiscos = malloc(150 * sizeof(char));
  strcpy(new_node->tituloDiscos, tituloDiscos);

  //hasta aquí;

  new_node->next = (*head_ref);

  (*head_ref) = new_node;
}

int main()
{
  struct Node *head = NULL;

  char nombre[20];
  char edad[20];
  char numerocds[20];
  char tituloDiscos[150];
  int data = 1;



  void enteringDta(){
     printf("Insertar nombre del cantante o grupo musical: ");
        fgets(nombre, sizeof(nombre), stdin);
        printf("Insertar edad: ");
        fgets(edad, sizeof(edad), stdin);
        printf("Insertar numero de cds: ");
        fgets(numerocds, sizeof(numerocds), stdin);
        printf("Insertar nombre de albums: ");
        fgets(tituloDiscos, sizeof(tituloDiscos), stdin);

        push(&head, data, nombre, edad, numerocds, tituloDiscos);
        printList(head);
  }



  char option[20];
  int o;

  
 
  do
  {

    printf("1) Insertar\n");
    printf("2) Consultar \n");
    printf("3) Borrar\n");
    printf("4) Salir\n");

    printf("Insertar una opcion:");
    fgets(option, 20, stdin); // Usamos fgets para no dejar una new line en el buffer 
     o = atoi(option);        // Convertimos el char a int de opciones

    switch (o)
    {
    case 1:
       enteringDta();
      break;
    case 2:
      printf("Consultando\n");
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
