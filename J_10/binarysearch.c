#include<stdio.h>
#include<conio.h>
int bins(int [],int,int,int);
int main()
{
int i,a[50],n,t,j,h,l,x,z;
printf("Enter number of elements : ");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
else
a[i]=a[i];
}
for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
if(a[i]==a[0])
l=a[0];
if(a[i]==a[n-1])
h=a[n-1];}
printf("\n%d <-- high\n%d <-- low",h,l);
printf("\nEnter a number to search : ");
scanf("%d",&x);
z=bins(a,x,l,h);
if(a[z]==x)
printf("%d is present",x);
else
printf("The entered no is not present");
getch();
}
int bins(int a[50],int x,int l,int h)
{
int mid;
if(l>h)
return (-1);
else
mid=(h+l)/2;
return(x==a[mid]?mid:x<a[mid]?bins(a,x,l,mid-1):bins(a,x,mid+1,h));
}
