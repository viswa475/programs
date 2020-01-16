#include<iostream.h>
#include<conio.h>
class complex
{
 float a,b;
 public:
 void setvalue()
 {
  cout<<"Enter the real and imaginary part:";
  cin>>a>>b;
  }
  complex operator+(complex);
  void printvalue()
  {
  cout<<a<<"+i"<<b;
  }
  };
  complex complex::operator+(complex c)
  {
   complex x;
   x.a=a+c.a;
   x.b=b+c.b;
   return(x);
   }
   void main()
   {
   clrscr();
   complex c1,c2,c3;
   c1.setvalue();
   c2.setvalue();
   c3=c1+c2;
   cout<<"\nThe complex numbers are\n";
   c1.printvalue();
   cout<<"\n";
   c2.printvalue();
   cout<<"\nThe sum of the compiled number is";
   c3.printvalue();
   getch();
   }
