/*Write a C++ program to print a pyramid pattern like(you can use for loop here-nested for loop)
11
222
333
4444
55555 */
#include<iostream>
using namespace std;
int main()
{
	int i, j;
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
	return 0;
}
