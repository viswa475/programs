//program to find the sum of two numbers
#include<iostream.h>
#include<conio.h>
class add
{
 int num1,num2,num3,num4,sum;
 public:
 add()
 { }
 add(int s1,int s2)
 {
  cout<<"\nParameterised constructor";
  num1=s1;
  num2=s2;
  sum=NULL;
  }
  add(add &a)
  {
   cout<<"\nCopy constructor";
   num1=a.num1;
   num2=a.num2;
   sum=NULL;
   }
    add(add &b)
  {
   cout<<"\nCopy constructor";
   num3=b.num3;
   num4=b.num4;
   sum=NULL;
   }

   void getdata()
   {
   cout<<"\nEnter the numbers :";
   cin>>num1>>num2;
   }
   void addition()
   {
   sum=num1+num2;
   }
   void putdata()
   {
   cout<<"\nThe numbers are..";
   cout<<num1<<"\t"<<num2;
   cout<<"\nThe sum of the numbers are:"<<sum;
   }
   };
   void main()
   {
   clrscr();
   add a,b(10,20),c(b);
   a.getdata();
   a.addition();
   b.addition();
   c.addition();
   cout<<"\nObject a:";
   a.putdata();
   cout<<"\nObject b:";
   b.putdata();
   cout<<"\nObject c:";
   c.putdata();
   getch();
   }

