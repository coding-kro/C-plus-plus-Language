//array 
#include<iostream>
using namespace std;
int main()
{
	int a[5], i;
	cout<<"Enter array element"<<endl;
	for(i=0; i<5; i++)
	{
		cin>>a[i];
	}
	cout<<"Array elements are : "<<endl;
		for(i=0; i<5; i++)
	{
		cout<<a[i]<<endl;
	}
	
	return 0;
}
