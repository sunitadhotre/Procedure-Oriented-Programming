#include<stdio.h>

void main()
{
void transpose();
void matrixmul()
clrscr();
printf("\t \tM E N U1. tranpose \n2 multipliction
switch(choice)
transpose();
matrixmul();
matrixadd();
martixsub();
getch();
}







void transpose()
{
int a[10][10];
int r1,c1,i,j;

printf("\nInput row and column of 1st matrix:\n");
scanf("%d%d",&r1,&c1);
printf("\nEntre the elements of 1st matrix:\n");
	for(i=0;i<r1;i++)
	for(j=0;j<c1;j++)
	scanf("%d",&a[i][j]);
	printf("\nThe 1st matrix is :\n ");   // Print the first matrix
	 for(i=0;i<r1;i++)
	 {
	   printf("\n");
	   for(j=0;j<c1;j++)
	   printf(" %d ",a[i][j]);
	 }
	 // Find the transpose
	printf("\nThe transpose of matrix is : \n");
		for(j=0;j<c1;j++)
		{       printf("\n");
			for(i=0;i<r1;i++)
			printf("  %d  ",a[i][j]);
		}

//getch();
}

