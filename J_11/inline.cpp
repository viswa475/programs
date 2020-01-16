#include<iostream>
using namespace std;
float x;
class il{
	private:
		int a,b;
	public:
		inline void gd()
		{
			cout<<"\nEnter a : ";
			cin>>a;
			cout<<"\nEnter b : ";
			cin>>b;
		}
		inline void sum()
		{
			x=a+b;
			cout<<"\nThe sum is "<<x;
		}
		inline void diff()
		{
			x=a-b;
			cout<<"\nThe difference is "<<x;
		}
		inline void pro()
		{
			x=a*b;
			cout<<"\nThe product is "<<x;
		}
		inline void divi()
		{
			x=(float)a/(float)b;
			cout<<"\nThe reminder is "<<x;
		}
};
int main()
{
	il z;
	z.gd();
	z.sum();
	z.diff();
	z.pro();
	z.divi();
	return 0;
}
