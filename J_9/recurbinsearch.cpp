#include<stdio.h>
int bins(int a[100],int ,int ,int );
int main(){
	int i,a[30],n,t,j,h,l,x,z;
	printf("enter N:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			else
			a[i]=a[i];
	l=0;
	h=n-1;
	printf("\nEnter Number to search:");
	scanf("%d",&x);
	z=bins(a,x,l,h);
	if(a[z]==x)
	printf("%d is Present",x);
	else
	printf("\t!!Not Present!!");
	return 0;
}
int bins(int a[100],int x,int l,int h)
{
	int mid;
	if(l>h)
	return(-1);
	else
	mid=(h+l)/2;
	return(x=a[mid]?mid:x<a[mid]?bins(a,x,l,mid-1):bins(a,x,mid+1,h));
	
}
