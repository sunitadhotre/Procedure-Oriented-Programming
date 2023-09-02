/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#define TRUE 1 struct link
#define SIZE 10
struct link
{
int info, next; };

struct link node [SIZE]; 

int GetNode();

void CreateList(); void FreeNode (int);

void Display();

void Insert(int, int);

void Delete(int); int p,avail = 0;

void main()

{

int ch = 1, i, n, x;

clrscr();

/*creation of available list */

node[i].next = i+1; node [SIZE-1].next = -1;

printf("\ncreate a List\n");

CreateList(); while (ch != 4)

printf("\n1 DISPLAY");

printf("\n2 INSERT");

printf("\n) - DELETE");

printf("\n4 - QUIT");

printf("\nEnter Your choice :");

scanf("%d",&ch); 
switch(ch)

{case 1: 

Display();

break; case 2:

printf("Node Insertion after which node? : "); scanf("%d", &n);

printf("Enter the item for insertion: ");

scanf("%d",&x); Insert (p,x);

break; case 3:

printf("\nEnter the node after which the node will be deleted : ");

scanf("%d",&n);
p=n;
Delete(p);

break; case 4:

break;

default:

printf("\nwrong choice! Try again\n");

}
}


int GetNode()
{
if (avail== -1)
{
printf("\nOVERFLOW");

exit(0);

}
{ for (10;1-SIZE -11++)

/creation of available 11st /

node[1].next = 1+1:

node[SIZE-1].next-1:

printf("\nCreate a List\n"); CreateList;

while (ch 1-4)

printf("\n1 DISPLAY");

printf("\n2 INSERT"); printf("\n3-DELETE");

printf("\n- QUIT");

printf("\nEnter your choice :"); scanf("%d",&ch);

switch(ch)

case 1: Display();

break;

case 2:

printf("Node Insertion after which node?: ");

scanf("%d", &n);

p = n;

printf("Enter the item for insertion : ");

scanf("%d", &x);

Insert (p. x);

break;

case 3: printf("\nEnter the node after which the node will be");
scanf("%d",&n);

Delete(p);

break; case 4:

break;

default:

printf("\nwrong choice! Try again\n");

deleted :");

int GetNode()

if (avail = -1)

printf("\nOVERFLOW"); exit(0);

}
p = avail; avail node [avail].next; return p;

}

void FreeNode(int q)

node [q].next = avail;

avail = q:

return;

void CreateList()

int x:

char c; printf("\nEnter an item to be inserted: "); scanf("%d",&x); while (TRUE) C getchar(); if (c 'y' || cy")

p GetNode();"

node [p].info = x;

node [p].next = -1;

printf("\nEnter the choice (y/n) : "); 

fflush(stdin);

printf("\nEnter an item to be inserted: ");

scanf("%d",&x);

Insert(p.x);

node [p].next -1;

else

return;

} void Display()

while (node [p].next = -1)

printf("\n%d\t%d\t%d ".p.node [p].info,node [p].next); p node [p].next;

printf("\n%d\t%d\t%d\n",p.node[p].info,node [p].next);
}
void Insert(int n, int x);

{

int q;
 if (r == -1)

{

printf("\nvoid insertion"); return;

}

q = GetNode(); node [q].info = X;

node [q].next = node[r].next;

node[r].next = q;

return;

}

void Delete(int r)

{

int qi

if (r == -1 | node[r].next ==

{

printf("\nvoid deletion"); return;

-1)

}

q=node[r].next; node[r].next = node [q].next;

FreeNode(q);

return;