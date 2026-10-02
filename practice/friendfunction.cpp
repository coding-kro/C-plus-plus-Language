#include<iostream>
using namespace std;
class aimit
{
	int x, y;
	protected:
	int z;
	public:
	void display()
	{
		cout<<"Enter Three no.";
		cin>>x>>y>>z;
	}
	friend void show(aimit a1);
};
void show(aimit a1)
{
	cout<<"sum = "<<a1.x+a1.y+a1.z;
}
int main()
{
	aimit a2;
	a2.display();
	show(a2);
}
