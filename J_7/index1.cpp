#include<iostream>
using namespace std;
int main()
{
    int a,b,c[100],i;
    cin>>a>>b;
    for( i=0;i<b;i++)
    {
        cin>>c[i];
    
    if(a==c[i])
    {
        cout << i ;
        
    }
    }
}