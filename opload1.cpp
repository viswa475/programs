#include<iostream>
using namespace std;
class comp{
	private:
		int r,i;
	public:
		void get()
		{
			cout<<"\nEnter real and img part : ";
			cin>>r>>i;
		}
		comp operator +(comp a)
		{
			comp c;
			c.r=a.r+r;
			c.i=a.i+i;
			return c;
		}
		comp operator -(comp a)
		{
			comp c;
			c.r=a.r-r;
			c.i=a.i-i;
			return c;
		}
		comp operator *(comp a)
		{
			comp c;
			c.r=a.r*r-a.i*i;
			c.i=a.r*i+a.i*r;
			return c;
		}
		comp operator /(comp a)
		{
			comp c;
			int x;
			x=r*r+i*i;
			c.r=(a.r*r+a.i*i)/x;
			c.i=(a.i*r-a.r*i)/x;
			return c;
		}
		void put()
		{
			cout<<"\nReal part : "<<r;
			cout<<"\nImg part : "<<i;
		}
};
int main()
{
	comp a,b,c;
	int op;
	a.get();
	b.get();
	while(1)
	{
		cout<<"\n\n1 - Sum\n2 - Diffrence\n3 - Product\n4 - Division\n5 - Exit";
		cout<<"\nEnter a choice : ";
		cin>>op;
		switch(op)
		{
			case 1:
				c=b+a;
				c.put();
				break;
			case 2:
				c=b-a;
				c.put();
				break;
			case 3:
				c=b*a;
				c.put();
				break;
			case 4:
				c=b/a;
				c.put();
				break;
			case 5:
				cout<<"\nEnter any key to Exit";
				exit(1);
		}
	}
	return 0;
}
