#include <iostream>
using namespace std;
class day
{
	int d,m,y,D,M,Y;
	public:
	day(){
	}
    void set_d(int d)
		{
			this->d=d;
		}
		void set_m(int m)
		{
				this->m=m;
			}
		void set_y(int y)
		{
				this->y=y;
		}
		int get_d()
		{
			return d;
		}
		int get_m()
		{
			return m;
		}
		int get_y()
		{
			return y;
		}
		void cal_md(day &p)
		{
			int year,month;
			 year=p.get_y()-y;
			month=p.get_m()-m;
			if(month<0)
			{
				month+=12;
				year-=1;
			}
			cout<<"\nyear:"<<year<<"\tmonths"<<month;
		}
};
int main()
{ 
	day D1;
	D1.set_d(14);
	D1.set_m(9);
	D1.set_y(1998);
	day D2(D1);
	day pr;
	pr.set_d(31);
	pr.set_m(7);
	pr.set_y(2017);
	D2.cal_md(pr);
	
}
