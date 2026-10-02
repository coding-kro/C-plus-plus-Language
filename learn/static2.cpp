//They are attributes of classes or clasa member

#include<iostream>
using namespace std;
class Customer
{
	string name;
	int ac_number, balance;
	static int total_customer;
	static int total_balance;
	public:
		Customer(string name, int ac_number, int balance)
		{
			this->name=name;
			this->ac_number=ac_number;
			this->balance=balance;
			total_customer++;
			total_balance+=balance;
		}
		
		static void accestatic()
		{
		cout<<"Total number of Customer: "<<total_customer<<endl;
		cout<<"Total Balance: "<<total_balance<<endl;	
		}
		
		void deposit(int amount)
		{
			if(amount>0)
			{
				balance+=amount;
				total_balance+=amount;
			}
		}
		
		void withdraw(int amount)
		{
			if(amount<=balance&&amount>0)
			{
				balance-=amount;
				total_balance-=amount;
			}
		}
		
		void show()
		{
			cout<<name<<" "<<ac_number<<" "<<balance<<" "<<total_customer<<endl;
		}
};
int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main()
{
	Customer obj("Mohit", 1, 1000);
	Customer obj1("Nitin", 2, 2000);
	obj.deposit(800);
	obj1.withdraw(500);
	Customer::accestatic();
}
