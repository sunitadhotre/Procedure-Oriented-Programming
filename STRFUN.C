#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char str[20],str1[20];
	int type,len;
	clrscr();
	scanf("%d",&type);

	switch(type)
	{
		case 1: flushall();
			printf("Entre the word to find the length:- \n");
		   //	 scanf("%s",&str);
		      gets(str);
			 len = strlen (str);

			 printf(" %s  %d",str,len);
		break;

		case 2: flushall();
			printf("Input the word to copy it:-\n");
			gets(str);

			len=strcpy(str,str1);
			printf("%s  copied: %s",str,str1);
		break;

		case 3:// flushall();
			printf("Entre 2 words to concatinate it:\n");
		       //	gets(str,str1);
			scanf("%s%s",&str,&str1);
			len=strcat(str,str1);
			printf("%s   ",len);
		break;

		case 4://flushall();
			printf("Entre 2 words to compare:\n");
		       //	gets(str,str1);
		       scanf("%s%s",&str,&str1);
			len=strcmp(str,str1);
			printf("\n%s",len);
		break;

	}
getch();
}