//They are attributes of classes or clasa member
#include<iostream>
using namespace std;
class Customer
{
	string name;
	int ac_number, balance;
	static int total_customer;
	public:
		Customer(string name, int ac_number, int balance)
		{
			this->name=name;
			this->ac_number=ac_number;
			this->balance=balance;
			total_customer++;
		}
		void show()
		{
			cout<<name<<" "<<ac_number<<" "<<balance<<" "<<total_customer<<endl;
		}
};
int Customer::total_customer = 0;
int main()
{
	Customer obj("Mohit", 1, 1000);
	Customer obj1("Nitin", 2, 2000);
	obj.show();
	obj1.show();
}
