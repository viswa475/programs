#include<stdio.h>
int main()
{
	int i,j,k,m,n,p;
	printf("value of m:");
	scanf("%d",&m);
	printf("value of m:");
	scanf("%d",&n);
	printf("value of p:");
	scanf("%d",&p);
	int a[m][n],b[n][p],c[m][p];
	for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	for(j=0;j<p;j++)
	scanf("%d",&b[i][j]);
	for(i=0;i<m;i++)
	for(j=0;j<p;j++){
	c[i][j]=0;
	for(k=0;k<n;k++){
	c[i][j]=c[i][j]+a[i][k]*b[k][j];}}
	for(i=0;i<m;i++){
	for(j=0;j<p;j++){
	printf("%d\t",c[i][j]);
	printf("\n");}}
	return 0;
}
