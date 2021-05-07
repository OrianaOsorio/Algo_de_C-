# include<iostream.h>
# include<conio.h>
# include<math.h>
# include<stdio.h>

void main()
{
	char nom[25];
	int sw1=0, sw2=0;
	double num=0, numres=0, suma=0, con=1
	clrscr();
	while (con==1)
	{
		cin>>num
		if(sw1==1)
		{
			gotoxy (10,3)
			numres=num*5;
			cout<<numres;
			sw1=0
		}
		else
		{	numres=num-20;
			cout<<numres;
			sw1=1
		}
		if(num<=800000)
		{
			sw2=1
		 }
		 con=con+1
		 suma=suma+num
	}
		if
		{
			(sw2=1)
			cout<<"la suma de los numeros es:"<<suma;
		}
		else
		{
			cout<<"no se cumplio la condicion"
		}
}
