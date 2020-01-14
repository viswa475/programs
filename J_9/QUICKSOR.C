#include<stdio.h>
#include<conio.h>
void quicksort(int a[100],int lb,int ub)
{
int p,temp,up,down;
if(lb<ub)
{
p=lb;
down=lb;
up=ub;
while(down<up)
{
while(a[down]<=a[p] && down<up)
down++;
while(a[up]>a[p])
up--;
if(down<up)
{
temp=a[down];
a[down]=a[up];
a[up]=temp;
}
}
temp=a[p];
a[p]=a[up];
a[up]=temp;
quicksort(a,lb,up-1);
quicksort(a,up+1,ub);
}
}
void main()
{
int a[100],n,i;
clrscr();
printf("Enter n : ");
scanf("%d",&n);
printf("Enter %d elements : ",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quicksort(a,0,n-1);
printf("\n\t Quick Sort \n");
for(i=0;i<n;i++)
printf("\n%d",a[i]);
getch();
}