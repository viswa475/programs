#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Enter number to check odd or even");
scanf("%d",&n);
(n%2==0)?printf("Even"):printf("Odd");
getch();
}