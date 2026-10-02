#include<iostream>
using namespace std;
 
class customer
{
	string name;
	int *data;
	
	public:
		
	customer()
	{
		name = "4";
		cout<<"Constructor is "<<name<<endl;
	}
	
	customer(string name)
	{
		this->name = name;
		cout<<"Constructor is "<<name<<endl;
	}	
	
	~customer()
	{
		cout<<"Destructor is "<<name<<endl;
	}
};

int main()
{
	customer a1("1"), a2("2"), a3("3");
	customer *a4 = new customer;
	delete a4;
}
