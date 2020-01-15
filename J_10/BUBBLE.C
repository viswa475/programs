#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,a[50],l,j;
clrscr();
printf("Enter n : ");
scanf("%d",&n);
printf("Enter %d numbers : ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
for(j=i+1;j<n;j++)
if(a[i]>a[j])
{
l=a[i];
a[i]=a[j];
a[j]=l;
}
else
a[i]=a[i];
printf("\n\t\tBubble Sort\n");
for(i=0;i<n;i++)
printf("\n%d",a[i]);
getch();
}
