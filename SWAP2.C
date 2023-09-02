//31st July swaping without using 3rd variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	clrscr();
		printf("Entre two no.s to swap:\n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;

	printf("Swaped no.s are:\n%d  %d ",a,b);
	getch();
}