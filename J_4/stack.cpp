#include<iostream>
#include<stack>
#include<utility>
using namespace std;
void display(	stack <int> st)
{
	while(!st.empty())
	{
		cout<<"\t"<<st.top();
	st.pop();
	}
}
int main()
{
	stack <int> st;
	st.push(7);
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	cout<<"before popping the size is:"<<st.size()<<endl;
	
	st.pop();
	st.top();
	st.size();

	cout<<"size:"<<st.size()<<endl;
	cout<<"top:"<<st.top()<<endl;
	cout<<"stack elements are:";
	display(st);
}
