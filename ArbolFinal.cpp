#include <iostream>
using namespace std;


// johnjaramillo@coruniamericana.edu.co

struct arbol
{
	int dato;
	arbol *i, *d;
}*elemento = NULL, *aux = NULL, *cabecera = NULL, 
 *ant = NULL, *aux2 = NULL, *ant2 = NULL;

int dato;
int buscar(void);
void insertar(void);
void buscarmenmay(void);
void buscarmaymen(void);
void eliminar(void);
void listar(struct arbol *cabecera);


void main(void)
{
	int y, opc;
	y=0;
	do
	{
		cout << "----------------------" << endl;
		cout << "0 - Salir" << endl;
		cout << "1 - Buscar" << endl;
		cout << "2 - Insertar" << endl;
		cout << "3 - Borrar" << endl;
		cout << "4 - Listar" << endl;
		cout << "----------------------" << endl;
		cout << "Seleccione opcion: ";
		cin >> opc;
		cout << "----------------------" << endl << endl;
		switch (opc)
		{
			case 0: break;
			case 1: cout << "Dato a buscar: ";
					cin >> dato;
					if (buscar())
						cout << "Dato existe!!!!" << endl << endl;
					else
						cout << "Dato inexistente!!!!" << endl << endl;
					break;
			case 2: cout << "Dato a insertar: ";
					cin >> dato;
					insertar();
					cout << "Dato Insertado!!!!" << endl << endl;
					break;
			case 3: cout << "Dato a borrar: ";
					cin >> dato;
					eliminar();
					break;
			case 4: 
//					cin >> dato;
					listar(cabecera);
					break;
			default: cout << "Opcion incorrecta!!!!!" << endl << endl;
		}
		cin.ignore();
	} while (opc);
}

int buscar(void)
{
	if (!cabecera)
	{
		cout << "No hay arbol!!!!" << endl << endl;
		return(0);
	}
	ant = NULL;
	aux = cabecera;
	while (aux)
	{
		if (dato == aux->dato)
			return(1);
		else
		{
			ant = aux;
			if (dato > aux->dato)
				aux = aux->d;
			else
				aux = aux->i;
		}
	}
	return(0);
}

void insertar(void)
{
	if (!cabecera)
	{
		cabecera = new(arbol);
		cabecera->dato = dato;
		cabecera->d = NULL;
		cabecera->i = NULL;
		return;
	}
	if (!buscar())
	{
		aux = new(arbol);
		aux->dato = dato;
		aux->i = NULL;
		aux->d = NULL;
		if (dato > ant->dato)
			ant->d = aux;
		else
			ant->i = aux;
	}
	else
		cout << "Dato existente!!!!" << endl << endl;
}

void buscarmenmay(void)
{
	aux2 = aux->d;
	ant2 = aux;
	while (aux2->i)
	{
		ant2 = aux2;
		aux2 = aux2->i;
	}
	aux->dato = aux2->dato;
	if (aux2->d)
		ant2->i = aux2->d;
	delete(aux2);
	ant2->d = NULL;
}

void buscarmaymen(void)
{
	aux2 = aux->i;
	ant2 = aux;
	while (aux2->d)
	{
		ant2 = aux2;
		aux2 = aux2->d;
	}
	aux->dato = aux2->dato;
	if (aux2->i)
		ant2->d = aux2->i;
	delete(aux2);
	ant2->i = NULL;
}

void eliminar(void)
{
	if (!buscar())
	{
		cout << "Elemento no encontrado !!!!" << endl << endl;
		return;
	}
	if (aux->d == NULL && aux->i == NULL)
	{
		if (ant->dato > dato)
			ant->i = NULL;
		else
			ant->d = NULL;
		delete(aux);
	}
	else
	if (aux->d != NULL)
		buscarmenmay();
	else
		buscarmaymen();
	cout << "Elemento Borrado!!!!" << endl << endl;

}

//+
void listar(struct arbol *cabecera)
{
		if (!cabecera)
	{
		cout << "No hay arbol!!!!" << endl << endl;	
		return;
	} else {
		cout << cabecera->dato << endl << endl;
		listar(cabecera->d) ;
		listar(cabecera->i);
	}
}
