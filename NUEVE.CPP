# include<iostream.h>
# include<conio.h>
# include<math.h>
# include<stdio.h>

void main()
{
	char nom[25];
	int sum=0, sw=0, i;
	double j=0, cont=0, num=0, coc=1, res=0, con=0, cont2=0
	clrscr();
	for(i=1;i<=6;i++)
	{
		cin>>num
		while (cont<=num)
		{
			coc=num/cont
			res=num-(coc*cont)
			if (res=0)
			{
				con=con+1
			}
			cont=cont+1
		}
		if (con=2)
		{
			cont2=cont2+1
		}
		sum=sum+num
		if (cont2>=3)
		{
			sw=1
		}
		if (sw=1)
		{
			prom=sum/6
			cout<<"el promedio de los numeros es:"<<prom;
		}
}