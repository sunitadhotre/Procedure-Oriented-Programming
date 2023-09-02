/*******************************************
Statement - Print Hello World
Programmer -Mukta Dhotre
Written For - http://developerinsider.in
********************************************/

#include <stdio.h>
#include <conio.h>

void main()
{
	char name[5];

	clrscr();
	printf("Entre your name: ");
       gets(name);
	puts("HELLO !");
	puts(name);
	getch();
 }