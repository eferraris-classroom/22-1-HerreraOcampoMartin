#include "Lista.h"

int main() {

    Lista *lista = crearLista();

    agregarNodo(lista, crearNodo(1));
    agregarNodo(lista, crearNodo(32));
    agregarNodo(lista, crearNodo(43));
    agregarNodo(lista, crearNodo(54));
    agregarNodo(lista, crearNodo(65));
    agregarNodo(lista, crearNodo(12));
    agregarNodo(lista, crearNodo(76));

    imprimirLista(lista);

    eliminarNodo(lista, 76);

    imprimirLista(lista);

    liberarLista(lista);

    return 0;
}
