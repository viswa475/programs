#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int hh,mm,ss;
    string m;
    cin>>hh>>mm>>ss;
    cin>>m;
    if(hh<=12)
    hh=hh+12;
    cout << setw(2) << setfill('0') << hh << ":" 
         << setw(2) << setfill('0') << mm << ":" 
         << setw(2) << setfill('0') << ss << endl;
   
}
