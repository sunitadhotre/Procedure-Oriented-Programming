#include<stdio.h>
void main()
{
int i =4, j=-1, k=0,w,x,y,z;
w = i || j ||k;
x = i && j && k;
y = i || j && k;
z = i && j || k;
printf("%d", w);
printf(" %d %d %d %d", w,x,y,z);
clrscr();

getch();
}