#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{	char source[]="Sayonara";
	char target[20];
	clrscr();

	strcpy(target,source);
	printf("\nSource string: %s",source);
	printf("\nTarget string: %s",target);

getch();
}