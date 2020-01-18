#include<stdio.h>
//#include<conio.h>
int main()
{
int a[10],i;
//clrscr();
printf("Enter 10 Number");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[0]<a[i])
a[0]=a[i];
}
printf("largest no is %d",a[0]);
//getch();
return 0;
}
