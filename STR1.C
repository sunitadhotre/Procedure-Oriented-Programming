/*******************************************
Statement - Print Hello World
Programmer -Mukta Dhotre
Written For - http://developerinsider.in
********************************************/

#include <stdio.h>
#include <conio.h>

void main()
{
	char name[]="Vaishnavi Dhotre";
	int i=0;
	clrscr();
	while(name[i]!='\0')
	{
	printf ("%c",name[i]);
	i++;
	}


	getch();
 }