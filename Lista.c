#include "Lista.h"
#include <stdlib.h>
#include <stdio.h>

Lista *crearLista(){
    Lista *lista = (Lista*) malloc(sizeof (Lista));

    if(lista == NULL){
        printf("No hay memoria libre.");
        exit(-1);
    }

    lista->tam = 0;
    lista->primero = NULL;

    return lista;
}

Nodo *crearNodo(int valor){
    Nodo *nuevo = (Nodo*) malloc(sizeof (Nodo));

    if(nuevo == NULL){
        printf("No hay memoria libre.");
        exit(-1);
    }

    nuevo->valor = valor;
    nuevo->siguiente = NULL;

    return nuevo;
}

void agregarNodo(Lista *lista, Nodo *nuevo){
    nuevo->siguiente = lista->primero;
    lista->primero = nuevo;
    lista->tam++;
}

void eliminarNodo(Lista *lista, int valorAEliminar){
    Nodo *act = lista->primero;
    Nodo *ant = act;

    if(act == NULL){
        return;
    }

    Nodo *sig = act->siguiente;

    for(; act != NULL; act = sig){
        sig = act->siguiente;
        if(act->valor == valorAEliminar){

            if(act == ant){
                lista->primero = act->siguiente;
                free(act);
            }else {
                ant->siguiente = act->siguiente;
                free(act);
            }

            lista->tam--;
            act = sig;
            continue;
        }

        ant = act;
        act = sig;

    }
}

void imprimirLista(Lista *lista){
    Nodo *aux = lista->primero;

    if(aux == NULL){
        printf("La lista está vacía.\n");
        return;
    }

    for(; aux != NULL; aux = aux->siguiente){
        printf("%d ", aux->valor);
    }

    printf("\n");
}
void liberarLista(Lista *lista){
    Nodo *aux = lista->primero;

    while(aux != NULL){
        Nodo *temp = aux->siguiente;
        free(aux);
        aux = temp;
    }

    free(lista);
}

