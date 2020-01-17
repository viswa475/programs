#include<iostream>
using namespace std;
class box{
	private:
		int l,b,h,v;
	public:
		box(int l,int b,int h)
		{
			this->l=l;
			this->b=b;
			this->h=h;
		}
		void vol()
		{
			v=l*b*h;
		}
		int comp(box x)
		{
			if(this->v>x.v)
			return 1;
			else
			return 0;
		}
};
int main()
{
	int i;
	box j(3,5,7);
	box k(9,4,6);
	j.vol();
	k.vol();
	i=j.comp(k);
	if(i)
	cout<<"\nVolume 1 is high";
	else
	cout<<"\nVolume 2 is high";
	return 0;
}
