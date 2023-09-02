#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10], b[10][10],c[10][10];
int r1,c1,r2,c2,i,j,k;
clrscr();
printf("\nInput row and column of 1st matrix:\n");
scanf("%d%d",&r1,&c1);
printf("\nEntre the elements of 1st matrix:\n");
	for(i=0;i<r1;i++)
	for(j=0;j<c1;j++)
	scanf("%d",&a[i][j]);
	printf("\nThe 1st matrix is :\n ");
	 for(i=0;i<r1;i++)
	 {
	   printf("\n");
	   for(j=0;j<c1;j++)
	   printf(" %d ",a[i][j]);
	 }

	printf("\nInput row and column of 2nd matrix:\n");
	scanf("%d%d",&r2,&c2);
	printf("\nEntre the elements of 2nd Matrrix:\n");
	for(i=0;i<r2;i++)
	for(j=0;j<c2;j++)
	scanf("%d",&b[i][j]);
		printf("\nThe 2nd matrix is :\n ");
		for(i=0;i<r2;i++)
	      {
		printf("\n");
		for(j=0;j<c2;j++)
		printf(" %d ",b[i][j]);
	      }

      if (r1==c2)
      {
	  for(i=0;i<r1;i++)
	  for(j=0;j<c2;j++)
	  {
	  c[i][j]=0;
	  for(k=0;k<r1;k++)

		c[i][j]=c[i][j]+a[i][k]*b[k][j];
	   }

	}
	else printf("Matrix multiplication not possible");

printf("\nThe multiplication matrix  is :\n ");
	for(i=0;i<r1;i++)
      {
	printf("\n");
	for(j=0;j<c2;j++)
	printf(" %d ",c[i][j]);
      }

getch();

}