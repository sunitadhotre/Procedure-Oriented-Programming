//25th July 2021
//Bubble sort %*^*%
#include<stdio.h>
//#define N 10
void main()
{
int a[5],temp,i,j, N;
clrscr();
printf("Enter how many numbers:\n");
scanf("%d", &N);
	printf("Input numbers:\n");
for(i=0;i<N;i++)
scanf("%d",&a[i]);
printf("The Given numbers are:\n");
for(i=0; i<N;i++)
printf("%d ", a[i]);
	for(i=0;i<N-1;i++)

	for (j=0;j<N-i-1;j++)
	{
	if(a[j]>a[j+1])
	{
	 temp=a[j];
	 a[j]=a[j+1];
	 a[j+1]=temp;
		}
	}
	printf("\nThe Accending Sorted numbers are:\n");
	for(i=0;i<N;i++)

	printf("%d  ",a[i]);
getch();
}