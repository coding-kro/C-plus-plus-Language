#include<iostream>
using namespace std;

class customer
{
	string name;
	int account_no;
	int balance;
	int *roi;
	
	public:
		
	//Default Constructor
	customer()
	{
		cout<<"Hello Constructor"<<endl;
		name = "Mohit";
		account_no = 335200;
		balance = 8000;
		roi = new int[100];
	}	
	
	//Parameterized Constructor
	customer(string name, int account_no, int balance)
	{
		this->name = name;
		this->account_no = account_no;
		this->balance = balance;
	}
	
	//Constructor Overloading
	customer(string a, int b)
	{
		name = a;
		account_no = b;
		balance = 20000;
	}
	
	//Inline Constructor
//	inline customer(string a, int b, int c): name(a), account_no(b), balance(c){
//		
//	}
	
	void display()
	{
		cout<<name<<" "<<account_no<<" "<<balance<<endl;
	}
};

int main()
{
	customer a1;
	customer a2("Nitin", 3312, 50);
	customer a3("Ankit", 2321);
	a1.display();
	a2.display();
	a3.display();
}
