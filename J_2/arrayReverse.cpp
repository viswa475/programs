//Program for Reversing an Array
#include<iostream>
using namespace std;
int main()
{
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Reversed Array:"<<"\n";
	for(int j=n-1;j>=0;j--)
	{
		cout<<a[j]<<"\t";
	}
}
