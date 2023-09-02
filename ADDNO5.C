
#include<stdio.h>
#include<conio.h>
void main()
{
	long int x,y,i, sum =0;
	char ch[20];
	clrscr();
       scanf("%s",&ch);
       x=atoi(ch);
	for (i=0;i<strlen(ch);i++)

	{
	y = x/10;   // gives quotient
	x = x % 10; //gives remainder
	sum = sum + x;
	x=y;
	}
      //	sum += x;
	printf("%d",sum);


getch();
}