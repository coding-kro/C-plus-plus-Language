#include<iostream>
using namespace std;
class A
{
	public:
		class B
		{
			int a,b;
			public:
				void input()
				{
					cout<<"Enter two numbers: "<<endl;
					cin>>a>>b;
				}
				void show()
				{
					cout<<a<<" "<<b<<endl;
				}
		};
};
int main()
{
	A::B obj;
	obj.input();
	obj.show();
}
