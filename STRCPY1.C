#include<stdio.h>
#include<conio.h>
void main()
{
	char source[]="Sachi";
	char target[20];

	xstrcpy(target,source);

	printf("\nsource string = %s",source);
	printf("\ntarget string = %s",target);

}
xstrcpy(char *t,char *s)
{
	while (*s !='\0')
	{	*t=*s;
		s++;
		t++;
	}
	*t='\0';
}