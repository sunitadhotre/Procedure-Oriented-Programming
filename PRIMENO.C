//19th July
#include<stdio.h>
void main()
{
	int n,i;
	clrscr();
  //	printf("Input no. to find if it is prime or not:\n");
	scanf("%d",&n);
	printf("The list of prime numbers");
	for (n=2;n<=50;n++)
	{
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
//		printf("\n %d is not prime ",n);
		break;
		}
	}
		if (i == n)
		printf("\n %d ",n);

}
       getch();

}