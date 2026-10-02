#include<iostream>
using namespace std;
class Enclosing 
{
	private:
		static int x;
		
		class Nested
		{
			int y;
			public:
				void NestedFun()
				{
					cout<<x;
				}
		};
		public:
			void disp()
			{
				Enclosing::Nested n1;
				n1.NestedFun();
			}
};
int Enclosing::x=456;
int main()
{
	Enclosing e1;
	e1.disp();
}
