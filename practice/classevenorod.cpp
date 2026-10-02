#include<iostream>
using namespace std;
class abc
{
	int num;
	public:
	void input();
	void check();
};		
	void abc::input()
	{
		cout<<"Enter no to check is it even or odd "<<endl;
		cin>>num;
	}
	void abc::check()
	{
		if(num%2==0)
		{
			cout<<num<<" is an even number."<<endl;	
		}
		else{
			cout<<num<<" is an odd number."<<endl;
		}
	}

int main()
{
	abc ob;
	ob.input();
	ob.check();
}

