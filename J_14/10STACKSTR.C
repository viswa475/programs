#include <stdio.h>
# define max 5
struct stak
       {
		int stak[max];
		int top;
	}s;
	void create(void);
	void push(void);
	int pop(void);
	void display(void);
	void main()
	{
		int choice;
		int option;
		s.top=-1;
		printf("\t\t\tstack operation\n");
		while(option)
	{
		printf("0:create\n");
		printf("1:push\n");
		printf("2:pop\n");
		printf("3:display\n");
		printf("4:exit\n");
		printf("___________");
		printf("enter your option:\n");
		scanf("%d",&choice);
		switch(choice)
		{
		case 0:
			create();
			break;

		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			display();
			break;
		case 4:
			exit();
			break;
		}
	   }
	   }
		void create()
		{
			int i,m;
			s.top=-1;
			printf("enter the number of elements");
			scanf("%d",&m);
			for(i=0;i<m;i++)
			{
			push();
			}
		  }

		void push()
		{
			int n;
			if(s.top==(max-1))
			{
				printf("stack is full\n");
				return;
			}
			else
			{
				printf("enter the element to be pushed");
				scanf("%d",&n);
				s.top=s.top+1;
				s.stak[s.top]=n;
			     }
			return;
		}
		int pop()
		{
			int num;
			if(s.top==-1)
			{
				printf("stack is empty");
				return(s.top);
			}
			else
			{
				num=s.stak[s.top];
				printf("popped element is=%d\n");
				s.top=s.top-1;
			}
			return(num);
		}
		void display()
		{
			int i;
			if(s.top==-1)
			{
				printf("stack is empty\n");
				return;
			}
			else
			{
				printf("\nthe status of the stack is\n");
				for(i=s.top;i>=0;i--)
				{
					printf("%d\n",s.stak[i]);
				}
			}
			printf("\n");

		}


