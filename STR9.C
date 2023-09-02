#include<stdio.h>
#include<conio.h>
void main()

{
	char arr[]="Bamboozeled";
	int len1, len2;
	clrscr();
	len1 = xstrlen(arr);
	len2 = xstrlen("Humpty Dumpty");
	printf("%u",&arr);
	printf("\n%c",*&arr[2]);
	printf("\nstring = %s length=%d",arr,len1);
	printf("\nstring = %s length=%d","Humpty Dumpty",len2);
getch();
}
       xstrlen(char *s)
{
		int length = 0;

		while(*s !='\0')
		{
			length++;
			s++;
		}
		return (length);

}