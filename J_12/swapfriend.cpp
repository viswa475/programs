#include <iostream>
using namespace std;
class A
{
	int a;
	public:
		void set_a(int a1)
		{
			a=a1;
		}
		int get_a()
		{
			return a;
		}
};
class B
{
	int b;
	public:
		void set_b(int b1)
		{
			b=b1;
		}
			int get_b()
			{
				return b;
			}
			friend void swap(A &A1,B &B1)
			{
				int temp;
				temp=B1.get_b();
				B1.set_b(A1.get_a());
				A1.set_a(temp);
			}
};
int main()
{
	A A1;
	B B1;
	int a1,b1;
	cin>>a1;
	cin>>b1;
	A1.set_a(a1);
	B1.set_b(b1);
	cout<<"\nswapped numbers are:"<<B1.get_b()<<"\t"<<A1.get_a();
}
