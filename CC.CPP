# include<iostream.h>
# include<conio.h>
# include<math.h>
# include<stdio.h>

void main()
{
	char nom [25];
	double n=0, sexo=0, edad=0, cont=0, con2=0, con3=0;
	int sw=0, sw2=0, sum, i;
	clrscr();

	for (i=1;i<=20;i++)


	{
		gotoxy (10,5);
		cout<<"si es hombre digite 2";
		cout<<"si es mujer digite 1";
		cin>>sexo;
		gotoxy (10,7);
		if (sexo==1)
		{
			cout<<"ingrese nombre";
			cin>>nom;
			gotoxy (10,9);
			cout<<"ingrese edad";
			cin>>edad
			gotoxy (10,11);
			sum=sum+edad
		}
			if (edad>18)
		{
			sw==1
		}
		else
		{
			cout<<"ingrese nombre";
			cin>>nom
			gotoxy (10,13);
			cout<<"ingrese edad";
			cin>>edad
			if (edad>=18)
			{
				cont=cont+1
				gotoxy (10,15);
				if (edad>50)
					con2=con2+1
			}

			else
			{
				con3=con3+1
			}
				if (con2==2)
				{
					gotoxy (10,17);
					sw=1
				}
	}
			if (sw==1)
			{
				cout<<"la suma de las dedades de las mujeres es:";
			}
			if (sw==1)
			{
				cout<<"hombres mayores de edad"<<cont;
				cout<<"hombres menores de edad"<<con3;
			}

	getch();
}


