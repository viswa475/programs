#include<iostream>
#include<utility>
using namespace std;
int main()
{
	pair <int,string> pair1;
	pair <char,double> pair2;
	pair1.first=4;
	pair1.second="viswa";
	pair2.first='M';
	pair2.second=8.23;
	cout<<pair1.first<<" "<<pair1.second<<endl;
	cout<<pair2.first<<" "<<pair2.second<<endl;
	return 0;
}
