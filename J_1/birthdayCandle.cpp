#include<iostream>
using namespace std;
int candle(int arr[],int n)
{
    int tall=arr[0];
    int count=0;
    for(int i=0 ; i<n ; i++)
  {
    if(arr[i]>tall)
    {
      tall=arr[i];    
    }
  }
  for(int j=0;j<n;j++)
  {
    if(arr[j]==tall)
      count++;
   }
  cout << count;
  return count;
}

int main()
{
    int n,a[1000],i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    candle(a,n);
}
