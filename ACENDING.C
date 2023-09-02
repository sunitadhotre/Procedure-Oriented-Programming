//21st July 2021
#include<stdio.h>
//#define N 10
void main()
{
int a[5],temp,i,j, N;
clrscr();
printf("Enter how many numbers");
scanf("%d", &N);
	printf("Input numbers:\n");
for(i=0;i<N;i++)
scanf("%d",&a[i]);
printf("The Given numbers are:\n");
for(i=0; i<N;i++)
printf("%d ", a[i]);
	for(i=0;i<N;i++)

	for (j=i+1;j<N;j++)
	{
	if(a[i]>a[j])
	{
	 temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
		}
	}
	printf("\nThe Accending Sorted numbers are:\n");
	for(i=0;i<N;i++)
	printf("%d  ",a[i]);
getch();
}