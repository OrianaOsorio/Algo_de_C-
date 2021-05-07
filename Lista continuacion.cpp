#include <iostream>
#include <malloc.h>
#include <stdlib.h>
using namespace std;

struct nodo
{
	int dato;
	struct nodo*siguiente;
};

struct nodo*insertarInicio(int x, struct nodo*enlace)
{
	struct nodo*p;
	p = (struct nodo*) malloc(sizeof(struct nodo));//reserva spacio,crea nodo
	p->dato = x;
	p->siguiente = enlace;
	return p;
}

void listar(struct nodo*enlace)
{
	struct nodo*p = enlace;
	while (p != NULL)
	{
		cout << p->dato << endl;
		p = p->siguiente;
	}
}

struct nodo*Eliminar(int x, struct nodo*enlace)
{
	struct nodo*p;
	p = (struct nodo*) malloc(sizeof(struct nodo));//reserva spacio,crea nodo
	p->dato = x;
	p->siguiente = enlace;
	p->eliminar = x;
	return p;
}

void Cambiar(struct nodo*enlace)
{
	struct nodo*p = enlace;
	while (p != NULL)
	{
		cout << p->dato << endl;
		p->dato = x;
		p = p->siguiente;
	}
}

struct nodo*insertarFinal(int x, struct nodo*enlace)
{
	struct nodo*p, *act;
	p = (struct nodo*) malloc(sizeof(struct nodo));
	p->dato = x;
	p->siguiente = NULL;
	if (enlace == NULL)
	{
		return p;
	}
	else
	{
		act = enlace;
		while (act->siguiente != NULL)
			act = act->siguiente;
		act->siguiente = p;
	}
	return enlace;
}

//contar nodos 
int longitud(struct nodo*enlace)
{
	struct nodo*p = enlace;
	int cont = 0;
	while (p != NULL)
	{
		cont++;
		p = p->siguiente;
	}
	return cont;
}

void main()
{
	struct nodo*cab = NULL;
	cab = insertarFinal(12, cab);
	cab = insertarInicio(11, cab);
	cab = insertarInicio(6, cab);
	cab = insertarInicio(4, cab);
	cab = insertarFinal(9, cab);

	cout << "longitud de la lista : " << longitud(cab) << endl;

	listar(cab);
	system("pause");
}
