#include<iostream.h>
#include<conio.h>
class distance
{
 int meter;
 public:
 distance()
 {
 }
 friend int func(distance)
 };
 int func(distance d)
 {
  d.meter=10;
  return d.meter;
  }
  int main()
  {
  distance d;
  clrscr();
  cout<<"Distance :"