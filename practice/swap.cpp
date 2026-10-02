#include<iostream>
using namespace std;
class swap1
{
	public;
	int(x, y);
	void swap(int *, int *);
};
void swap1::swap(int *x, int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
}
int main()
{
	int a = 45, b = 35;
	swap1 s1;
	cout<< "Before Swap\n"; 
	cout<< "a = " << a << " b = " << b << "\n"; 
	s1.swap(&a, &b); 
	cout<< "After Swap with pass by pointer\n"; 
	
}