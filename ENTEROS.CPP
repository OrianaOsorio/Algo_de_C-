//Imprimir cuatro columnas, en la primera los enteros del 1 al 100,
//en la segunda y tercera, la segunda y tercea potencia de los enteros
//de la primera, en la cuarta la suma de las tres primeras columnas.
# include<iostream.h>
# include<math.h>
# include<conio.h>
# include<stdio.h>
void main()
{
	int num=0, cont=1, cuad=1, cub=1, sum=0;
	clrscr();
	while(cont<=5)
	{
		num=cont;
		cuad=num*num;
		cub=cuad*num;
		sum=cuad+cub+num;
		gotoxy(10,5);
		cout<<"Numeros Enteros: "<<num;
		gotoxy(10,7);
		cout<<"Elcuadrado del numero es: "<<cuad;
		gotoxy(10,9);
		cout<<"El cubo del numero es: "<<cub;
		gotoxy(10,11);
		cout<<"La suma es: "<<sum;
		cont=cont+1;
		getch();
	}
}