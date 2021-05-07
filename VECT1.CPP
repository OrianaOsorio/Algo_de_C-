


#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>

void main()
{
	int vect[5], j;
	clrscr();
	for (j=1;  j<=5;  j++)
	{
		gotoxy(20,30);
		cout<<"digite el numero: "<<j<<"  ";
		cin>> vect[j];
	}
	clrscr();
	gotoxy(20,35);
	cout<<"los numeros del vector son--";
	for(j=1;  j<=5;  j++)
	{
		cout<<vect[j]<<"  ";
	}
	getch();
}

