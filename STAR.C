#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	clrscr();

	for(i=5;i>0;i--)

	{
	for(j=0;j<i;j++)
	printf(" * ");
	printf("\n");
	for(i=0;i<j;i++)
		printf(" ");
	}

	getch();

}