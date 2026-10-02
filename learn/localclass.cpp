//Local class
#include<iostream>
using namespace std;
void fun()
{
	class A
	{
		private:
			int a,b;
			public:
				void show()
				{
					cout<<"Enter two numbers : "<<endl;
					cin>>a>>b;
					cout<<a<<" "<<b;
				}
	};
	A obj;
	obj.show();
}
int main()
{
	fun();
}
