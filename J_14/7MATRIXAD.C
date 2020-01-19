#include <stdio.h>
#include <math.h>
int main()
{
int i,j,m,n,a[15][15],b[15][15],c[15][15];

printf("enter the order of the matrix\n");
scanf("%d",&m);
scanf("%d",&n);
printf("enter for the elements of matrix a\t\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
printf("enter for the elements of matrix b\t\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{
scanf("%d",&b[i][j]);
}
printf("the sum of two matrices a and b is\t\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]+b[i][j];
printf("%d\t",c[i][j]);
}
printf("\n");}
return 0;
}
