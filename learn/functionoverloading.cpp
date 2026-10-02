//wap in c++ to calculate area of (circle, rectangle, square, sphere and rombus)
#include<iostream>
using namespace std;
class calcarea{
	//area of circle
	public:
//	double r;
//	double areaofcircle;
//	void area(double r)
//	{
//		this->r=r;
//		areaofcircle = 3.14 * r * r;
//		cout<<"Area of Circle = "<<areaofcircle<<endl;
//	}
	
	float r;
	float areaofcircle;
	void area(float r)
	{
		this->r=r;
		areaofcircle = 3.14 * r * r;
		cout<<"Area of Circle = "<<areaofcircle<<endl;
	}
	
	//area of rectangle
	int len;
	int bred;
	int areaofrectangle;
	void area(int len, int bred)
	{
		this->len = len;
		this->bred = bred;
		areaofrectangle = len * bred;
		cout<<"Area of Rectangle = "<<areaofrectangle<<endl;
	}
	
	//area of square
	int side;
	int areaofsquare;
	void area(int side)
	{
		this->side = side;
		areaofsquare = side * side;
		cout<<"Area of Square = "<<areaofsquare<<endl;
	}
	
	//area of sphere
	double a;
	double areaofsphere;
	void area(double a)
	{
		this->a = a;
		areaofsphere = 4*3.14*a*a;
		cout<<"Area of sphere = "<<areaofsphere<<endl;
	}
	
	//area of rombus
	float base, height;
	float areaofrombus;
	void area(float base, float height)
	{
		this->base = base;
		this->height = height;
		areaofrombus = base * height;
		cout<<"Area of rombus = "<<areaofrombus;
	}
};

int main()
{
	calcarea obj;
	//obj.area(8.0);
	obj.area(8.0f);
	obj.area(5,6);
	obj.area(4);
	obj.area(6.0);
	obj.area(5.0f,4.0f);
	
}
