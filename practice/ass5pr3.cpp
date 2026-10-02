//Write a C++ program to using assignment operator and make a addition, subtraction, multiplication, and division of two numbers.
#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout<<"Enter two no's "<<endl;
	cin>>x>>y;
	x+=y;
	cout<<"Addition = "<<x<<endl;
	x-=y;
	cout<<"Subtraction = "<<y<<endl;
	x*=y;
	cout<<"Multiplication  = "<<x<<endl;
	x/=y;
	cout<<"Division = "<<y<<endl;
	return 0;
}
