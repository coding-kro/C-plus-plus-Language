#include<iostream>
#include<math.h>
using namespace std;
class Customer{
	string name;
	int balance;
	
	public:
		Customer(string name, int balance)
		{
			this->name = name;
			this->balance = balance;
		}
		
		void deposite(int amount)
		{
			if(amount>=0)
			{
				balance+=amount;//balance=balance+amount
			}else
			{
				cout<<"Invalid amount"<<endl;
			}
		}
		
		void show()
		{
			cout<<"Customer name: "<<name<<" Balance :"<<balance<<endl;
		}
};

int main()
{
	Customer obj = Customer("Mohit Kumar", 1000);
	obj.deposite(100);
	obj.show();
	
	cout<<pow(2,4);
}
