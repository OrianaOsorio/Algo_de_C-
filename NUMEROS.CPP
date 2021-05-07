# include<iostream.h>
# include<conio.h>
# include<math.h>
# include<stdio.h>

void main()
{
	int k=1, cont=1, qont=1, condive=0, porc=0, num, cuad=0, coc=0, res, tem=0;
	double fac=1;
	clrscr();
	while(k<=4)
	{
		gotoxy(10,5);
		cout<<"Digite un Numero "<<"  ";
		cin>>num;
		porc=num*0.3;
		switch(k)
		{
			case 1:	while(cont<=num)
				{
					cuad=cuad+num;
					cont=cont+1;
				}
				gotoxy(10,7);
				cout<<"El 3% de "<<num<<" es "<<porc;
				gotoxy(10,8);
				cout<<"El Cuadrado de "<<num<<" es "<<cuad;
				getch();
				clrscr();
			break;
			case 2:	tem=num;
				while(tem>=2)
				{
					fac=fac*tem;
					tem=tem-1;
				}
				gotoxy(10,7);
				cout<<"El 3% de "<<num<<" es "<<porc;
				gotoxy(10,8);
				cout<<"El factorial de "<<num<<" es "<<fac;
				getch();
				clrscr();
			break;
			case 3: while(num>=qont)
				{
					coc=num/qont;
					res=num-(coc*qont);
					if(res==0)
					{
						condive=condive+1;
					}
					qont=qont+1;
				}
				gotoxy(10,7);
				cout<<"El 3% de "<<num<<" es "<<porc;
				if(condive==2)
				{
					gotoxy(10,8);
					cout<<"El numero "<<num<<" es primo";
				}
				else
				{
					gotoxy(10,8);
					cout<<"El numero "<<num<<" no es primo";
				}
				getch();
				clrscr();
			break;
			case 4: coc=0;
				res=0;
				coc=num/2;
				res=num-(coc*2);
				gotoxy(10,7);
				cout<<"el 3% de "<<num<<" es "<<porc;
				if(res==0)
				{
					gotoxy(10,8);
					cout<<"El numero "<<num<<" es par";
				}
				else
				{
					gotoxy(10,8);
					cout<<"El numero "<<num<<" es impar";
				}
				getch();
				clrscr();
			break;
		}
	k=k+1;
	}
}
