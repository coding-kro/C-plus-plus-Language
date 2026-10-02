#include<iostream>
using namespace std;
class div
{
	int a, b, c;
	public:
	void input()
	{
		cout<<"Enter Two Values "<<endl;
		cin>>a>>b;
	}
	void cal()
	{
		c = a / b;
	}
	void result()
	{
		cout<<"Divison : "<<c;
	}
};

int main()
{
	div ob;
	ob.input();
	ob.cal();
	ob.result();
}
