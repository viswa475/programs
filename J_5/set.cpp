#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set <int> s;
    int count;
    int type,q;
    cin>>count;
    for(int i=0;i<count;i++)
    {
    cin>>type>>q;
    if(type==1)
    {s.insert(q);}
    else if (type==2)
    {s.erase(q);}
    else
    if(s.find(q)==s.end())
    cout<<"No"<<"\n";
    else
    cout<<"Yes"<<"\n";
}
    return 0;
}




