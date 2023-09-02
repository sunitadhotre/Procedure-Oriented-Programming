#include<stdio.h>
#include<conio.h>
int test()
{
static int n= 10;
return n--;
}
int  main()
{
clrscr();
for (test(); test(); test())
printf("%d", test());
return 0;
}