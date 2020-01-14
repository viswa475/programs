#include<stdio.h>
#include<conio.h>
typedef struct{
int real,imag;
};
int add(comp *,comp *,comp *)
int sub(comp *,comp *,comp *)
int mult(comp *,comp *,comp *)
int div(comp *,comp *,comp *)
void main()
{
comp c1,c2,*c3;
int n;
scanf("%d",&n);
scanf("%d %d",c1.real,c1.imag);
scanf("%d %d",c2.real,c2.imag);
if(x==1)
add(c1,c2,c3);
printf("the sum of the complex numbers %d+i%d",*(c3->real),*(c3->imag));
sub(c1,c2,c3);
printf("the difference of the complex numbers %d-i%d",*(c3->real),*(c3->imag));
mult(c1,c2,c3);
printf("the multiplication of the complex numbers %d*i%d",*(c3->real),*(c3->imag));
div(c1,c2,c3);
printf("the division of the complex numbers %d/i%d",*(c3->real),*(c3->imag));
getch();
}
void add(comp *c1,comp *c2,comp *c3)
{
c3->real=c1.real+c2.real;
c3->imag=c1.imag+c2.imag;
return;
}
void sub(comp *c1,comp *c2,comp *c3)
{
c3->real=c1.real-c2.imag;
c3->imag=c1.real-c2.imag;
return;
}
void mult(comp *c1,comp *c2,comp *c3)
{
c3->real=c1.real*c2.real;
c3->imag=c1.real*c2.imag;
return;
}
void div(comp *c1,comp *c2,comp *c3)
{
c3->real= c1.real/c2.real;
c3->imag=c1.imag/c2.imag;
return;
}

