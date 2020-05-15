#include <stdio.h>
#include <stdlib.h>



void clrscr()
{
    system("@cls||clear");
}

typedef()


typedef struct node
{
    int val;
    struct node *next;
} node_t;


int borrar_ultimo(node_t * head) {
    int retval = 0;
    /* si y solo si hay un elemento o nodo, borralo*/
    if (head->next == NULL) {
        retval = head->val;
        free(head);
        return retval;
    }

    /* borrar del segundo al último */
    node_t * current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    retval = current->next->val;
    free(current->next);
    current->next = NULL;
    return retval;

}


void imprimit_lista(node_t *head)
{
    node_t *current = head;

    while (current != NULL)
    {
        printf("%d\n", current->val);
        current = current->next;
    }
}

void insertar(node_t *head, int val)
{
    node_t *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }

    /* now we can add a new variable */
    current->next = (node_t *)malloc(sizeof(node_t));
    current->next->val = val;
    current->next->next = NULL;
}

int menu(void)
{
    
    node_t *head = NULL;
    head = (node_t *)malloc(sizeof(node_t));
    if (head == NULL)
    {
        return 1;
    }

    int initVal;

    printf("Insertar un valor para inicializar la lista: ");
    scanf("%d", &initVal);

    head->val = initVal;
    head->next = NULL;
    


    int opcion;
    int insertarValor;
    clrscr();
    do
    {
        
    
        printf("1) Insertar \n");
        printf("2) Consultar \n");
        printf("3) Suprimir \n");
        printf("4) Salir \n");
        scanf("%d", &opcion);

        printf("\n");
        printf("\n");
        switch (opcion)
        {
        case 1:
           printf("Digitar valor a insertar: ");
           scanf("%d", &insertarValor);
           insertar(head, insertarValor);
           printf("\n");
           break;
        case 2:
            printf("Consulta: \n");
            imprimit_lista(head);
            break;
        case 3:
            printf("Suprimir: \n");
            borrar_ultimo(head);
            break;
        case 4:
            printf("4.-Salir");
            break;
        }
        printf("\n");
        printf("\n");
       

    } while (opcion != 4);

   return 0;
}

int main()
{

   
    menu();

    return 0;
}