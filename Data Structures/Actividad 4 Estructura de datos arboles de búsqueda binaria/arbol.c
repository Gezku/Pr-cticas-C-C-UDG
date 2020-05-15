#include <stdio.h> 
#include <stdlib.h> 
#include <limits.h> 
#include <conio.h>  

struct Node 
{ 
    int dato; 
    struct Node* izquierdo, *derecho; 
}; 
  

struct Node* nuevoNodo(int datos) //Para creaer un nuevo nodo
{ 
    struct Node* nodo = (struct Node*) 
                        malloc(sizeof(struct Node)); 
    nodo->dato = datos; 
    nodo->izquierdo = nodo->derecho = NULL; 
    return(nodo); 
} 
  
//Regresa el valor máximo del árbol binario.
int encontrarMaximo(struct Node* raiz) 
{ 
    
    if (raiz == NULL) 
      return INT_MIN; 
  
  
    int res = raiz->dato; 
    int lres = encontrarMaximo(raiz->izquierdo); 
    int rres = encontrarMaximo(raiz->derecho); 
    if (lres > res) 
      res = lres; 
    if (rres > res) 
      res = rres; 
    return res; 
} 

//Regresa el valor máximo del árbol binario.
int encontrarMinimo(struct Node* raiz) 
{ 
    if (raiz == NULL) 
      return INT_MAX; 
  
   
    int res = raiz->dato; 
    int lres = encontrarMinimo(raiz->izquierdo); 
    int rres = encontrarMinimo(raiz->derecho); 
    if (lres < res) 
      res = lres; 
    if (rres < res) 
      res = rres; 
    return res; 
} 
  
int main() 
{ 
    struct Node*NewRoot=NULL; 
    struct Node *raiz = nuevoNodo(25); 
    raiz->izquierdo= nuevoNodo(7); 
    raiz->derecho= nuevoNodo(40); 
    raiz->izquierdo->derecho= nuevoNodo(30); 
    raiz->derecho->izquierdo= nuevoNodo(12);
    raiz->izquierdo->derecho->izquierdo=nuevoNodo(12);
    raiz->izquierdo->izquierdo = nuevoNodo(15);
    raiz->izquierdo->izquierdo->izquierdo=nuevoNodo(13); 
    raiz->izquierdo->derecho->derecho=nuevoNodo(45); 
    raiz->izquierdo->izquierdo->derecho=nuevoNodo(5); 
    raiz->derecho->derecho=nuevoNodo(35); 
    raiz->derecho->derecho->izquierdo=nuevoNodo(28); 
    raiz->derecho->derecho->derecho=nuevoNodo(20);
  
    printf("Maximo: %d \n", encontrarMaximo(raiz)); 
    printf("Minimo: %d \n", encontrarMinimo(raiz)); 
    
    getch();
  
    return 0; 
} 