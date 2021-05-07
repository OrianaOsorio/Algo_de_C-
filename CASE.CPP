//Capturar por pantalla un numero entero. Elabore un algoritmo
//en donde cada usuario ten ga la posibilidad de escoger una
//de estas opciones: 1 - Mostrar el cubo.
//                   2 - Mostrar el numero triplicado.
//                   3 - Mostrar factorial.
//                   4 - Mostrar raiz cuadrada.
//Son 15 usuarios.

# include<iostream.h>
# include<math.h>
# include<conio.h>
# include<stdio.h>

void main()
{
	int num, ntri=1, cont, tem=0, opc, cub=1, racua=1;
	double fac=1;
	clrscr();
	while(cont<4)
	{
		gotoxy(5,5);
		cout<<"Digite un Numero"<<"  ";
		cin>>num;
		gotoxy(5,7);
		cout<<"Para Ver el Cubo, Digite 1";
		gotoxy(5,8);
		cout<<"Para Ver el Numero Triplicado, Digite 2";
		gotoxy(5,9);
		cout<<"Para Ver el Factorial, Digite 3";
		gotoxy(5,10);
		cout<<"Para Ver la Raiz Cuadrada, Digite 4";
		gotoxy(5,12);
		cout<<"Elija una Opcion"<<"  ";
		cin>>opc;
		switch(opc)
		{
			case 1:	cub=pow(num,3);
				gotoxy(5,14);
				cout<<"El Cubo es:"<<"  "<<cub;
				getch();
				clrscr();
			break;
			case 2:	ntri=num*3;
				gotoxy(5,14);
				cout<<"El Numero Triplicado es:"<<"  "<<ntri;
				getch();
				clrscr();
			break;
			case 3:	tem=num;
				while(tem>=2)
				{
					fac=fac*tem;
					tem=tem-1;
				}
				gotoxy(5,14);
				cout<<"El Factorial es:"<<"  "<<fac;
				getch();
				fac=1;
				clrscr();
			break;
			case 4:	racua=pow(num,0.5);
				gotoxy(5,14);
				cout<<"La Raiz Cuadrada es:"<<"  "<<racua;
				getch();
				clrscr();
			break;
		}
		cont=cont+1;
	}
}

