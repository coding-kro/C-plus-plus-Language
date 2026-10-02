#include<iostream>
using namespace std;
class add
{
	int a, b, c;
	public:
		void input()
		{
			cout<<"Enter Two Values";
			cin>>a>>b;
		}
		void sum()
		{
			c=a + b;
		}
		void show()
		{
			cout<<c;
		}
};
int main()
{
	add ob;	//ob is object
	ob.input();   
	ob.sum();
	ob.show();
}
