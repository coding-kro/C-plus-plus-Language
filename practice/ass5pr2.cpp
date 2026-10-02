//Write a C++ program to check the conditions using conditional operator (ternary operator)
#include<iostream>
using namespace std;
int main()
{
	int x, y;
	cout<<"Enter two no's to check which is greater "<<endl;
	cin>>x>>y;
	int greater=(x>y)?x:y;
	cout<<"The Greater no is "<<greater;
	return 0;
}
