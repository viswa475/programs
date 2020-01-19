#include <stdio.h>
//#include <conio.h>
#define m 100
void create (int stak[]);
void view (int stak[]);
int empty();
void staktop (int stak[]);
void push (int stak[]);
void pop (int[]);
int n,top=-1;
int main()
{
	int stak[10],op;
	clrscr();
	printf("\nenter the number of elements:");
	scanf("%d",&n);
	do
	{
	printf("\nenter the option to choose\n1:create\n2:view\n3:push\n4:pop\n5:top\n6:exit");
	printf("\nenter your choice:");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
			create(stak);
			break;
		case 2:
		{
			view(stak);
			break;
		}
		case 3:
		{
			push(stak);
			break;
		}
		case 4:
		{
			pop(stak);
			break;
		}
		case 5:
		{	staktop(stak);
			break;
		}
	}
	}
	while(op!=6);
	return 0;
}
void create(int stack[])
{
	int j;
	for(j=0;j<n;j++)
	{
		push(stack);
	}
}
void view(int stak[])
{
	int k;
	printf("the elements in the stack are:\n");
	for(k=top;k>=0;k--)
	{
		printf("%d\n",stak[k]);
	}
}
int empty()
{
	if(top==-1)
	{
	return 1;
	}
	else
	{
	return 0;
	}


}
void staktop(int stak[])
{
	if(empty(stak))
	{
	printf("stack is empty\n");
	}
	else
	{
	printf("staktop=%d\n",stak[top]);
	}
}
void push(int stak[])
{
	int i,p;
	if(top==(n-1))
	{
	printf("stak is full\n");
	}
	else
	{
	top++;
	printf("enter the element to be added:\n");
	scanf("%d",&p);
	stak[top]=p;
	}
}
void pop(int stak[])
{
	int x;
	if(empty(stak))
	{
	printf("stak is empty\n");
	return;
	}
	else
	{
	x=stak[top];
	top--;
	printf("popped number is %d\n",x);
	}
}


