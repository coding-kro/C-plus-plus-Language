//Write a program in C++ to identifed positive and negitive number.
#include<iostream>
using namespace std;
class abc
{
	int num;
	public:
	void input()
	{
		cout<<"Enter No to check is it positive or negtive "<<endl;
		cin>>num;
	}
	void check()
	{
		if(num>=1){
			cout<<num<<" is Positive Number."<<endl;
		}
		else{
			cout<<num<<" is Negtive Number."<<endl;
		}
	}
};
int main()
{
	abc ob;
	ob.input();
	ob.check();
}
