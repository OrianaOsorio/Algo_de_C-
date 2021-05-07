# include<iostream.h>
# include<conio.h>
# include<math.h>
# include<stdio.h>

void main()
{
	char nom[25];
	int cuenta,sal,clave=1,val,i;
	clrscr();
	for (i=1;i<=10;i++)
	{
		gotoxy(10,2);
		cout<<"ingrese nombre: ";
		cin>>nom;
		gotoxy(10,4);
		cout<<"ingrese numero de cuenta: ";
		cin>>cuenta;
		gotoxy(10,6);
		cout<<"ingrese salario: ";
		cin>>sal;
		gotoxy(10,8);
		cout<<"ingrese clave: ";
		cin>>clave;
		gotoxy(10,10);
		cout<<"ingrese valor: ";
		cin>>val;
		if((clave==1)&(val<=sal))
		{
			sal=sal-val;
		}
		if(clave==0)
		{
			sal=sal+val;
		}
		gotoxy(10,12);
		cout<<"el usuario "<<nom<<" tiene un saldo de: "<<sal;
		getch();
		clrscr();
	}
}






