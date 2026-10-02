#include<iostream>
using namespace std;
class swapno
{
	public:
	int x, y;
	void swap(int &x, int &y);
};
void swapno::swap(int &x, int &y)
{
int z = x;
x = y;
y = z;	
}
int main()
{
	 int a = 45,b = 35;
	 swapno s1;
	 cout<<"Before Swap \n";
	 cout<<"a= "<<a<<"b= "<<b<<"\n";
	 s1.swap(a,b);
	 cout<<"After Swap with pass by pointer\n";
	 cout<<"a= "<<a<<"b= "<<b<<"\n";
}
