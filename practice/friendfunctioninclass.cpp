#include<iostream>
using namespace std;
class base;
class aimit
{
	public:
		void disp(base&  b1);
};


class base
{
	int x, y;
	public:
		void input() 
		{
			cout<<"Enter two no.";
			cin>>x>>y;
		}
		friend void aimit::disp(base& b1);
};

		void aimit::disp(base& b1)
		{
			cout<<"Sum = "<<b1.x+b1.y;
		}

int main()
{
	base b2;
	b2.input();
	aimit a1;
	a1.disp(b2);
}
