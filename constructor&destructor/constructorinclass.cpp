#include<iostream>
using namespace std;

class bba
{
	
	int roll;
	string cname;
	int x, y;
	string sname;

	public:
	bba()
	{
		cout<<"Enter college name and roll"<<endl;
		cin>>cname>>roll;
	}
	bba(int x)
	{
		cout<<x*x<<endl;
	}
	bba(string sname)
	{
		cout<<sname<<endl;
	}
	bba(int x, int y)
	{
		cout<<x+y<<endl;
	}
};
int main()
{
	bba b1;
	bba b2(10);
	bba b3("Aimit");
	bba b4(30,20);
}
