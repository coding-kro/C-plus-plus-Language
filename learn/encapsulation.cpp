#include<iostream>
using namespace std;
class Customer{
	string name;
	int balance;
	int age;
	
	public:
		Customer(string name, int balance, int age)
		{
			this->name = name;
			this->balance = balance;
			this->age = age;
		}
		
		void deposite(int amount)
		{
			if(amount>=0)
			{
				balance+=amount;//balance=balance+amount
			}else
			{
				cout<<"Invalid amount."<<endl;
			}
			
		}
		
		void validage(int age)
		{
			if(age>0&&age<=110)
			{
				this->age=age;
			}else
			{
				cout<<"Enter correct age."<<endl;
			}	
		}
		
		void show()
		{
			cout<<"Customer name: "<<name<<" Balance: "<<balance<<" Customer age: "<<age;
		}
};

int main()
{
	Customer obj("Mohit kumar",1000,20);
	obj.deposite(100);
	obj.validage(115);
	obj.show();
	return 0;
}
