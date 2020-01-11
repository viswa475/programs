//Program for Fibonacci Series 
#include<iostream>
using namespace std;
void show(int num,int num1)
{
    if(num>num1)
    return;
    cout<<num<<" ";
    show(num+1,num1);
}
int main()
{
    int a,b;
    cin>>a>>b;
    show(a,b);
}
