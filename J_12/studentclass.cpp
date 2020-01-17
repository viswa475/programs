#include<iostream>
using namespace std;
class student
{
	private:
		int rollno,sem;
		char name[20],branch[6];
	public:
		void gd();
		void pd();	
};
void student::gd()
{
	cin>>name>>rollno>>branch>>sem;
}
void student::pd()
{
	cout<<"\n"<<name<<"\n"<<rollno<<"\n"<<branch<<"\n"<<sem;
}
int main()
{
	student s1,s2,s3;
	s1.gd();
	s1.pd();
	s2.gd();
	s2.pd();
	s3.gd();
	s3.pd();
	return 0;
}
