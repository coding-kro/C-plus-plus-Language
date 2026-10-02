#include<iostream>
#include<bits/stdc++.h>  
using namespace std;
class constructorEx
{
	public:
	int n = 10;
	constructorEx()
	{
		cout<<n<<endl;
	}
	~constructorEx()
	{
		cout<<"Constructor Distroyed"<<endl;
	}
};
int main()
{
	constructorEx obj;
}
