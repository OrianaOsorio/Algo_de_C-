# include<iostream.h>
# include<conio.h>
# include<math.h>
# include<stdio.h>

void main()
{
	int cod=0,sw=0,cont=0,kont=0,coc=0,div,total=0,qont=0,res=0;
	double val=0;
	clrscr();
	while(cont<30)
	{
		gotoxy(10,2);
		cout<<"ingrese codigo:";
		cin>>cod;
		gotoxy(10,4);
		cout<<"ingrese valor de matricula:";
		cin>>val;
		total=total+val;
		if(val==100000)
		{
			while(kont<=cod)
			{
				kont=kont+1;
				coc=cod/kont;
				res=cod-(kont*coc);
				if(res==0)
				{
					qont=qont+1;
				}
			}
			cont=cont+1;
		}
		if(qont==2)
		{
			kont=0;
			sw=1;
		}
	clrscr();
	}
	if(sw==1)
	{
		gotoxy(10,7);
		cout<<"el total general de matriculas es: "<<total;
		getch();
	}
	getch();
}


