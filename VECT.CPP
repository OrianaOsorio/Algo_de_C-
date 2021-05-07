#include<math.h>
#include<conio.h>
#include<iostream.h>

void main ()
{
	int vect [8], j , k, aux;
	clrscr ();
	for (j=0; j<=7; j++)
	{
		gotoxy (10,10);
		cout<<"digite el numero "<<j<<" ";
		cin>> vect [j];
	}
	clrscr ();
	gotoxy (10,20);
	cout<<"los numero del vector son: "<<"  ";
	for(j=0; j<=7; j++)
	{
		cout<<vect[j]<<" ";
	}
	getch();
}







