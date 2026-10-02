#include<iostream>
using namespace std;
class customer
{
	string name;
	int account_no;
	int balance;
	
	public:
	customer()
	{
		name = "Mohit";
		account_no = 3352;
		balance = 9000;
	}
	
	//Copy Constructor
	customer(customer &b)
	{
		name = b.name;
		account_no = b.account_no;
		balance = b.balance;
	}
	
	display()
	{
		cout<<"Hello Constructor"<<endl;
		cout<<name<<" "<<account_no<<" "<<balance<<endl;
	}
};

int main()
{
	customer a1;
	a1.display();
	customer a2(a1);
	a2.display();
	customer a3;
	a3 = a2;
	a3.display();
}
