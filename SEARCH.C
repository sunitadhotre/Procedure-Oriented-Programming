//to find if there is same element in the given array.
#include<stdio.h>
void main()
{
int a[20],i,n,x;
clrscr();
printf("\nEnter no of elements of array:\n");
scanf("%d",&n);
for(i=0;i<n;i++)
//printf("\nEntre the elements:\n");
scanf("%d",&a[i]);
printf("\nEnter the element which you want to find:\n");
scanf("%d",&x);
for(i=0;i<n;i++)
{
	if(a[i]==x)
	{
	printf("found");
	break;
	}
	}
 if (i == n) printf("Not found");

getch();
}