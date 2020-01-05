#include<iostream>
using namespace std;
class Fd
{
	long int pamount;
	int years;
	float rate;
	float rvalue;
	public:
		Fd(){}
		Fd(long int p,int y,float r=0.12);
		Fd(long int p,int y,int r );
		void display(void);
};
Fd::Fd(long int p,int y,float r)
{
	pamount=p;
	years=y;
	rate=r;
	rvalue=pamount;
	for(int i=1;i<=y;i++)
	rvalue=rvalue*(1.0+r);
}
Fd::Fd(long int p,int y,int r)
{
	pamount=p;
	years=y;
	rate=r;
	rvalue=pamount;
	for(int i=1;i<=y;i++)
	rvalue=rvalue*(1.0+float(r)/100);
}
void Fd :: display(void)
{
	cout<<"PAmount="<<pamount<<"\n";
	cout<<"RValue="<<rvalue<<"\n";
}
int main()
{
	
	long int p;
	int y;
	int R;
	float rv;
	cout<<"Enter Amount,Year and ir(in decimal form):";
	cin>>p>>y>>rv;
	Fd fd1(p,y,rv);
	fd1.display();
	cout<<"Enter Amount,Year and ir(in percent form):";
	cin>>p>>y>>R;
	Fd fd2(p,y,R);
	fd2.display();
	cout<<"Enter amount and year:";
	cin>>p>>y;
	Fd fd3(p,y);
	fd3.display();
	return 0;
}
