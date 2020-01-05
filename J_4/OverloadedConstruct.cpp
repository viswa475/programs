#include<iostream>
using namespace std;
class complex
{
	float x,y;
	public:
		complex(){}
		complex(float a){x=y=a;
		}
		complex(float real,float imag)
		{
			x=real;
			y=imag;
		}
		friend complex sum(complex,complex);
		friend void display(complex);
};
complex sum(complex c1,complex c2)
{
	complex c3;
	c3.x=c1.x+c2.x;
	c3.y=c1.y+c2.y;
}
void display(complex c)
{
	cout<<c.x<<"+j"<<c.y<<"\n";
}
int main()
{
	complex A(2.7,3.3);
	complex B(5.5);
	complex C;
	C = sum(A, B);
	cout<<"A=";display(A);cout<<"\n";
	cout<<"B=";display(B);cout<<"\n";
	cout<<"C=";display(C);
	return 0;
}
