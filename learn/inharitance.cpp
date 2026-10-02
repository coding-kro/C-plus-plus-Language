// inharitance
#include<iostream>
using namespace std;
class ABC{
	public:
		int x, y;
		void display()
		{
			x = 10;
			y = 20;
			cout<<x + y<<endl;
		}
};

class AIMIT:public ABC{
	public:
		void add()
		{
			cout<<x + y;
		}
};

int main()
{
	AIMIT obj;
	obj.display();
	obj.add();
}
