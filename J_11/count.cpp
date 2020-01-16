#include<iostream>
using namespace std;
class count{
	private:
		static int c;
	public:
	 	void obj();
	 	static void showcount()
	 	{
	 		cout<<c;
		 }
};
void count::obj()
{
	c++;
}
int count::c;
int main()
{
	count t1,t2,t3;
	t1.obj();
	t2.obj();
	t3.obj(); 
	count::showcount();
	return 0;
}
