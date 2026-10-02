#include<iostream>
using namespace std;

class Vehicle{
	public:
	 Vehicle()
	 {
	 	cout<<"This is Vehicle. \n";
	 }
};

class car:public Vehicle{
	
};

int main()
{
	Vehicle obj;
	return 0;
}
