#include<stdio.h>
#include<conio.h>
int main()
{
	int s1[2][2];
	int s2[2][2];
	int i,j,c[2][2];
	printf("Entre 1st Matrix");
	for (i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&s1[i][j]);
	}
	{
		printf("Entre 2nd Matrix:");
		for (i=0;i<2;i++)

	{
		for(j=0;j<2;j++)
		scanf("%d",&s2[i][j]);
	}}
	{
		for(i=0;i<2;j++)

	{
		for(j=0;j<2;j++)
		c[i][j]=s1[i][j]+s2[i][j];
	}}
	{
		printf("The Matrix is :  \n");
		for(i=0;i<2;i++)

	{
		for(j=0;j<2;j++)
		{
			printf("%d",c[i][j]);
		}
		printf("\n");
	}}
	return 0;
}