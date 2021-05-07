#include <iostream>
#include <malloc.h>
#include <stdlib.h>
using namespace std;

struct nodo
{
	int dato;
	struct nodo*siguiente;
};



struct nodo*insertarNum(int x, struct nodo*enlace)
{
	struct nodo*p, *act;
	p = (struct nodo*)malloc(sizeof(struct nodo));
	p->dato = x;
	p->siguiente = NULL;
	if (enlace == NULL)
	{
		return p;
	}
	else{
		act = enlace;
		while (act->siguiente != NULL)
			act = act->siguiente;
		act->siguiente = p;
	}
	return enlace;
}

//Contar números positivos
int contarPositivos(struct nodo*enlace)
{
	struct nodo*p = enlace;
	int contPos = 0;
	while (p != NULL)
	{
		if (p->dato >= 0){
			contPos++;
		}
		
		p = p->siguiente;
	}
	return contPos;
}


//Contar números negativos
int contarNegativos(struct nodo*enlace)
{
	struct nodo*p = enlace;
	int contNeg = 0;
	while (p != NULL)
	{
		if (p->dato < 0){
			contNeg++;
		}

		p = p->siguiente;
	}
	return contNeg;
}


void main()
{
	struct nodo*cab = NULL;
	cab = insertarNum(12, cab);
	cab = insertarNum(-2, cab);
	cab = insertarNum(7, cab);
	cab = insertarNum(1, cab);
	cab = insertarNum(-300, cab);
	cab = insertarNum(16, cab);
	cab = insertarNum(-45, cab);
	cab = insertarNum(34, cab);
	cab = insertarNum(21, cab);
	cab = insertarNum(-4, cab);

	cout << "En total hay " << contarPositivos(cab) << " numeros positivos" << endl;
	cout << "En total hay " << contarNegativos(cab) << " numeros negativos" << endl;
	system("pause");
}











/*


#include <iostream>
#include <malloc.h>
#include <stdlib.h>
#include <string>
using namespace std;
int posDelete;
int posChange;
int numChange;


struct nodo
{
	int dato;
	struct nodo*siguiente;
};

struct nodo*insertarInicio(int x, struct nodo*enlace)
{
	struct nodo*p;
	p = (struct nodo*) malloc(sizeof(struct nodo));
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

struct nodo*insertarFinal(int x, struct nodo*enlace)
{
	struct nodo*p, *act;
	p = (struct nodo*)malloc(sizeof(struct nodo));
	p->dato = x;
	p->siguiente = NULL;
	if (enlace == NULL)
	{
		return p;
	}
	else{
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

int cambiar(struct nodo*enlace)
{
	struct nodo*p = enlace;
	int cont = 0;
	while (p != NULL)
	{

		if (cont == posChange){
			cout << "Ingresefdgdddion desea eliminar " << endl;
		}

		cont++;
		p = p->siguiente;
	}
	return cont;
}

int main()
{
	struct nodo*cab = NULL;
	cab = insertarFinal(12, cab);
	cab = insertarInicio(11, cab);
	cab = insertarInicio(6, cab);
	cab = insertarInicio(4, cab);
	cab = insertarFinal(9, cab);

	cout << "En total hay " << longitud(cab) << " elementos" << endl;
	listar(cab);
	cout << "Ingrese que posicion desea eliminar " << endl;
	cin >> posDelete;
	cout << "Ingrese que posicion desea cambiar" << endl;
	cin >> posChange;
	cout << "Ingrese por que numero desea cambiarlo" << endl;
	cin >> numChange;

	cambiar(cab);
	system("pause");
}
*/