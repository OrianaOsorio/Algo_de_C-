# include<iostream.h>
# include<conio.h>
# include<math.h>
# include<stdio.h>

void main()
{
	int k=0, numht, dif;
	double totr=0, totgen=0, valh, exced;
	char nom[20];
	clrscr();
	while(k<5)
	{
		gotoxy(10,5);
		cout<<"Digite Nombre"<<"  ";
		cin>>nom;
		gotoxy(10,7);
		cout<<"Numero de Horas Trabajadas"<<"  ";
		cin>>numht;
		gotoxy(10,9);
		cout<<"Valor Hora"<<"  ";
		cin>>valh;
		totr=numht*valh;
		if(numht>40)
		{
			dif=numht-40;
			if(dif<=9)
			{
				exced=((2*valh)*dif);
			}
			else
			{
				exced=((3*valh)*dif);
			}
		}
		totr=totr+exced;
		gotoxy(15,11);
		cout<<"El Total del Trabajador: "<<nom <<" es: $"<< totr;
		getch();
		totgen=totgen+totr;
		k=k+1;
		exced=0;
		clrscr();
	}
	gotoxy(10,13);
	cout<<"El Total General es: $"<<totgen;
	getch();
	clrscr();
}


