#include<stdio.h>
#include<conio.h>
int fib(int);
void main()
{
int i,n,a,on;
clrscr();
printf("Enter n : ");
scanf("%d",&n);
on=n;
for(i=0;i<on;i++)
{
a=fib(i);
printf("\n%d",a);
}
getch();
}
int fib(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
return (fib(n-1)+fib(n-2));
}