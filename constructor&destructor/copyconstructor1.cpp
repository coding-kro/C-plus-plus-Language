#include<iostream>
using namespace std;
class point{
	private:
		double x, y;
	public:
		point()
		{
			
		}
		point(double px, double py)
		{
			x = px;
			y = py;
		}
		void display()
		{
			cout<<"Sum = "<<x+y;
		}
};
int main()
{
	point a(41,54);
	point b;
	b = a;
	b.display();
}
