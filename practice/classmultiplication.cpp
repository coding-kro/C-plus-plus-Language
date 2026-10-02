#include<iostream>
using namespace std;
class mul
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
		c = a * b;
	}
	void result()
	{
		cout<<"Multiplication : "<<c;
	}
};
int main()
{
	mul ob;
	ob.input();
	ob.cal();
	ob.result();
}
