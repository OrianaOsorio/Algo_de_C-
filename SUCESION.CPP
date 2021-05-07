# include<iostream.h>
# include<conio.h>
# include<math.h>
# include<stdio.h>

void main()
{
	int nt=15,ter=17,con=1,sw=1;
	clrscr();
	while(con<=nt)
	{
		gotoxy(10,2);
		cout<<ter;
		if(sw==1)
		{
			ter=ter-2;
			sw=2;
		}
			else
			{
				ter=ter+3;
				sw=1;
			}
		con=con+1;
		getch();
	 }
}

