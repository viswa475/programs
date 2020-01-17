#include<stdio.h>
#define max 5
struct que{
			int front,rear;
			int a[max];
		  }q;
		  void create(struct que q);
		  void insert(void);
		  void delet(void);
		  void display(void);
		  int main()
		  {
		  	q.rear=-1;
		  	q.front=0;
		  	int op;
		  	printf("\t\t\tQUEUE USING STRUCTURE\n\n");
		  	do{
		  		printf("\t1:create\t2:insert\t3:delet\t4:display\t5:exit\n");
		  		printf("\tenter the operation:");
		  		scanf("%d",&op);
		  		switch(op)
		  		{
		  			case 1:create(q);
		  			break;
		  			case 2:insert();
		  			break;
		  			case 3:delet();
		  			break;
		  			case 4:display();
		  			break;
				  }
			  }while(op!=5);
			  return 0;
		  }
		 /* void create(struct queue)
		  {
		  	int m,i;
		  	q.rear=-1;
		  	q.front=0;
		  	insert();
		  }*/
		  void insert()
		  {
		  	int x;
		  	if (q.rear==(max))
		  	{
		      printf("\tqueue is full\n");
			  }
			else
			  {
			  	scanf("\t%d",&x);
			  	q.rear++;
			  	q.a[q.rear]=x;
			  }
			  
		  }
		  void delet()
		  {
		  	int x;
		  	if(q.rear<q.front)
		  	{
		  		printf("\tqueue is empty\n");
			  }
			 else
			 {
			 	x=q.a[q.front];
			 	q.front++;
			  } 
		  }
		  void display()
		  {
		  	int i;
		  	/*if(q.rear<q.front)
		  	{
		  		printf("the queue is empty");
			  }
			  else
			  {*/
			  
		    	printf("\tthe status of the queue is\n");
		  		printf("\t%d__front\n",q.a[q.front]);
		  		printf("\t%d__rear\n",q.a[q.rear]);
		  	    for(i=q.front;i<=q.rear;i++)
		     	{
		  		  printf("\t%d\n",q.a[i]);
			    }  
			    printf("\n");
			}
		  	
		  	void create(struct que q)
		    {
		  	int m,i;
		  	q.rear=-1;
		  	q.front=1;
		  	insert();
		    }
		  	
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
