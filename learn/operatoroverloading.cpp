#include<iostream>
using namespace std;

class complex{
	
	int real, img;
	
	public:
		
		complex()
		{
			
		};
		
		complex(int real, int img)
		{
			this->real = real;
			this->img = img;
		};
		
		void display()
		{
			cout<<real<<" +i"<<img<<endl;
		}
		
		complex operator +(complex &c)
		{
			complex ans;
			ans.real = real + c.real;
			ans.img = img + c.img;
			return ans;
		}
};

int main()
{
	complex obj(3,4);
	complex obj2(4,6);
	obj.display();
	obj2.display();
	
	complex obj3 = obj + obj2;
	obj3.display();
}
