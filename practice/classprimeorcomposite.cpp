//Write a C++ program to check prime and composite no
#include<iostream>
using namespace std;
class abc
{
	int num, i, count=0;
	public:
	void input();
	void check();
 };
 
void abc::input()
{
	cout<<"Enter no"<<endl;
	cin>>num;
}

void abc::check()
{
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}	
	}
	if(count==2)
	{
		cout<<num<<" is a prime number. "<<endl;
	}
	else{
		cout<<num<<" is a composite number. "<<endl;
	}
}
int main()
{
	abc ob;
	ob.input();
	ob.check();
}
