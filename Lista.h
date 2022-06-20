#ifndef INC_22_1_HERRERAOCAMPOMARTIN_LISTA_H
#define INC_22_1_HERRERAOCAMPOMARTIN_LISTA_H

typedef struct nodo {
    int valor;
    struct nodo *siguiente;
} Nodo;

typedef struct lista {
    int tam;
    Nodo *primero;
} Lista;

Lista *crearLista();
Nodo *crearNodo(int valor);
void agregarNodo(Lista *lista, Nodo *nuevo);
void eliminarNodo(Lista *lista, int valorAEliminar);
void imprimirLista(Lista *lista);
void liberarLista(Lista *lista);

#endif
