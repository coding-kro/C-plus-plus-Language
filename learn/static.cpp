#include<iostream>
using namespace std;
class ABC
{
	public:
	static int x;
	int y;
	void change()
	{
		x++;
		cout<<x<<endl;
		y++;
		cout<<y<<endl;
	}
};
int ABC::x=20;
int main()
{
	ABC a1,a2,a3;
	cout<<"a1.x = "<<a1.x<<" a2.x = "<<a2.x<<" a3.x = "<<a3.x<<endl;
	a1.y=20;
	a2.y=30;
	a3.y=40;
	a1.change();
	a2.change();
	a3.change();
	cout<<"a1.y = "<<a1.y<<" a2.y = "<<a2.y<<" a3.y = "<<a3.y<<endl;
}
