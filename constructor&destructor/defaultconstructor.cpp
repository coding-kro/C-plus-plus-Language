#include<iostream>
using namespace std;
class defaultconstructor
{
	public:
		int num;
		defaultconstructor()
		{
			cout<<"Default Constructor called"<<endl;
			num = 2;
		}
};
int main()
{
	defaultconstructor p;
	cout<<"Default num is : "<<p.num<<endl;
}
