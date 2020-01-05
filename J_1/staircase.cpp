#include<iostream>
using namespace std;
int main()
{
    int i,j,k,num,count;
    cin>>num;
    count=num-1;
    for(i=1;i<=num;i++)
    {
        for(k=1;k<=count;k++)
        {
            cout<<" ";
        }
        for(j=1;j<=i;j++)
        {cout<<"#";}
        cout<<"\n";
        count--;
    }
}
