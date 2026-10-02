//Write a C++ program using arithmetic operator and make a addition, subtraction, multiplication and division of two numbers.
#include<iostream>
using namespace std;
int main()
{
	int a, b, add, sub, mul, div;
	cout<<"Enter two no's for operations"<<endl;
	cin>>a>>b;
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	cout<<"Addition = "<<add<<endl<<"Subtraction = "<<sub<<endl<<"Multiplication = "<<mul<<endl<<"Division = "<<div<<endl;
	return 0;
}
