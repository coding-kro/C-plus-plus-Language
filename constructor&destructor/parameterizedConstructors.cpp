#include<iostream>
using namespace std;
class parameterizedConstructors
{
	public:
		int num;
		parameterizedConstructors(int x)
		{
			cout<<"Parameterized Constructors Called"<<endl;
			num = x;
		}
};
int main()
{
	parameterizedConstructors ob(2);
	cout<<"Parameterized num is : "<<ob.num<<endl;
}
