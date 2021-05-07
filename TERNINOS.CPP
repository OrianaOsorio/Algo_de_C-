#include<math.h>
#include<conio.h>
#include<iostream.h>
void main()
{
int num=17,band=0,cont=1;
clrscr();
gotoxy(10,14);
cout<<"terminos"<<"  ";
while(cont<=15)
{
cout<<num<<"  ";
if(band==1)
{
num=num+3;
band=0;
}
else
{
num=num-2;
band=1;
}
cont=cont+1;
}
getch();
}
