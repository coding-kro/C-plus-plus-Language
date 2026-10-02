#include<iostream>
using namespace std;
class customer
{
	string name;
	int *data;
	
	public:
	 
	customer()
	{
		name = "Mohit";
		data = new int;
		*data = 10;
		cout<<"Constructor is called "<<endl;	
	}
	
	//Destructor
	~customer()
	{
		cout<<"Destructor is called "<<endl;	
	}
};

int main()
{
	customer a1;
}
