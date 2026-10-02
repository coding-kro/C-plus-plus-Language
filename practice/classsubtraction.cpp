#include<iostream>
using namespace std;
class sub
{
	int a, b, c;
	public:
	void input()
	{
		cout<<"Enter Two No's"<<endl;
		cin>>a>>b;
	}
	void cal()
	{
		c = a - b;
	}
	void show()
	{
		cout<<"Subtraction : "<<c;
	}
};

int main()
{
	sub ob;
	ob.input();
	ob.cal();
	ob.show();
}
