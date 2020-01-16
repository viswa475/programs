#include <iostream>
using namespace std;

class area{
	private:
		char *n;
		int p;
		static int count;
		
	public:
		//cityname()
		//{
		//	n=new char[];
		//}
		
	    void getdata()
	    {	
	    cout<<"enter the city name and pincode\n";
	    cin>>n>>p;	
		}
		
		void putdata()
		{
 			 cout<<"City name\t"<<"Pincode\n";
			 cout<<n<<p<<"\n";
		}
		
		void dis()
		{
			count++;
		}
		
		static int tot()
		{
			return count;
		}
};
int area::count;
int main()
{
	area x[5];
	area *f=new area[5];
	for(int i=0;i<5;i++){
	f->getdata();
    }
    for(int i=0;i<5;i++)
    {
    	f->getdata();
	}
	cout<<"no of obj created :\t"<<area::tot();
	return 0;
}
