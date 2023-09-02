/*******************************************
Statement - Print Hello World
Programmer -Mukta Dhotre
Written For - http://developerinsider.in
********************************************/

#include <stdio.h>
#include <conio.h>

void main()
{
	char name[25];

	clrscr();
	printf("Entre your name: ");
	scanf("%s",&name);
	printf("HELLO %s!",name);
	getch();
 }