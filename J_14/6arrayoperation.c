#include<stdio.h>
void create(int a[],int);
void display(int a[],int );
void insert(int a[],int * );
void delete(int a[],int );
int main()
{
int a[50],k,n;
printf("\tEnter No of elt to be created:");
scanf("%d",&n);

do
{
printf("\tChoose option\t1.Creat\t2.View\t3.Insert\t4.Delet\t5.Exit\t\nSelected option is:");
scanf("%d",&k);
switch(k)
{
case 1:
	create(a,n);
	break;
case 2:
	display(a,n);
	break;
case 3:
	insert(a,&n);
	break;
case 4:
	delete(a,n);
	break;
case 5:
	printf("\n\n\t\tpress any key to exit");
	break;
default:
	printf("\n\n\n\t\tInvalid option");
	break;
}}while(k!=5);
return 0;
}
void create(int a[100],int n)
{
	int i;
	printf("\n\n\n\t\tEnter Element:");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);}
	return ;
}
void display(int a[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
	printf("\n\n%d\t",a[i]);}
	return ;
}
void insert(int a[100],int *n)
	{
	 /*int i,m,b;
	 printf("enter p ,l");
	 scanf("%d",&m);
	 scanf("%d",&b);
	 for(i=n;i>m;i--)
	 {
	   a[i+1]=a[i];}
	  a[m]=b;
	  for(i=0;i<n;i++){
				printf("%d",a[i]);}
				return;}*/
	int i,j,l,m;
	printf("Enter location and then element:\t");
	scanf("\t%d\t%d",&l,&m);
	*n+=1;
	for(j=*n-1,i=1;i<*n;i++,j--)
	{
		a[j+1]=a[j];

	}
	a[l]=m;
	return ;
	}
void delete(int a[100],int n)
{
	int i,s;
	printf("Enter the location to delete:");
	scanf("%d",&s);
	a[s]=0;
		for(i=0;i<n;i++)
		{
		printf("\t%d",a[i]);
		}
	return ;
}
