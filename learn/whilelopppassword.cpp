#include<iostream>
using namespace std;
int main()
{
	int pwd=2852;
	int myPwd;
	cout<<"Enter your Password: ";
	cin>>myPwd;
	
	while(pwd>0)
	{
		if(pwd!=myPwd)
		{
			cout<<"Enter your password: ";
			cin>>myPwd;
		}
		else
		{
			cout<<"Unlocked!";
			break;
		}
	}
}
