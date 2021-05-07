//entrar por pantalla los datos de 40 estudiantes: codigo, nombre, edad,
//cal 1, cal 2, cal 3, estrato 1 a 6, valor de matricula. Se pide:
//1 - Promedio de notas de cada estudiante.
//2 - Total de estudiantes de estrato mayores de 19 a;os que aprobaron el curso
//3 - total de estudiantes de estrato 5 o 6, menores de 18 anos que reprobaron el curso
//4 - Promedio del valor matricula
//5 - Total general de matriculas

# include<iostream.h>
# include<math.h>
# include<conio.h>
# include<stdio.h>
void main()
{
	char nom[25];
	int cod=0,edad=0,est=0,cone=0,conte3=0,conte5=0;
	double cal1=0,cal2=0,cal3=0,valmat=0,prom=1,tgm=0,prommat=1;
	clrscr();
	while (cone<2)
	{
		gotoxy(10,5);
		cout<<"digite codigo: ";
		cin>>cod;
		gotoxy(10,7);
		cout<<"digite nombre: ";
		cin>>nom;
		gotoxy(10,9);
		cout<<"digite edad: ";
		cin>>edad;
		gotoxy(10,11);
		cout<<"digite calificacion 1: ";
		cin>>cal1;
		gotoxy(10,13);
		cout<<"digite calificacion 2: ";
		cin>>cal2;
		gotoxy(10,15);
		cout<<"digite calificacion 3: ";
		cin>>cal3;
		gotoxy(10,17);
		cout<<"digite estrato: ";
		cin>>est;
		gotoxy(10,19);
		cout<<"digite valor matricula: ";
		cin>>valmat;
		prom=(cal1+cal2+cal3)/3;
		gotoxy(10,22);
		cout<<"el estudiante "<<nom <<" tiene una nota de "<<prom;
		getch();
		clrscr();
		if((est==3)&(edad>19)&(prom>=3))
		{
			conte3=conte3+1;
		}
		else
		{
			if((est>=5)&(edad<18)&(prom<3))
			{
				conte5=conte5+1;
			}
		}
		tgm=tgm+valmat;
		cone=cone+1;
	}
	prommat=tgm/2;
	clrscr();
	gotoxy(10,5);
	cout<<"el promedio de matricula es "<<prommat;
	getch();
	gotoxy(10,7);
	cout<<"el total general de la matricula es "<<tgm;
	getch();
	gotoxy(10,9);
	cout<<"el total de estudiantes de estrato 3 es "<<conte3;
	getch();
	gotoxy(10,11);
	cout<<"el total de estudiantes de estrato 5 es "<<conte5;
	getch();
}