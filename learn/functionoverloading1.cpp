#include<iostream>
using namespace std;
class area{
	
	public:
		
		//area of circle
		int calculatearea(int r)
		{
			return 3.14*r*r;
		}
		
		//area of rectangle
		int calculatearea(int l, int b)
		{
			return l*b;
		}
};

int main()
{
	area a1,a2;
	cout<<"Area of circle: "<<a1.calculatearea(4)<<endl;
	cout<<"Area of rectangle: "<<a2.calculatearea(5,4);
}
