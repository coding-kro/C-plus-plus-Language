#include<iostream>
using namespace std;

int main() {
	int num = 5;
	
	cout << " Value of num : " << num << endl;
	
	//address of Operator -&
	
	cout << " Address of num is :" << &num <<endl;
	
	int *ptr = &num;
	
	cout << " Address is : " << ptr << endl;
	cout << " Value is : " << *ptr << endl;
	
	double d = 4.2;
	double *p2 = &d;
	
	cout << " Address is : " << p2 << endl;
	cout << " Value is : " << *p2 << endl;
	
	cout << " Size of integer is "<< sizeof(num) << endl;
	cout << " Size of integer is "<< sizeof(ptr) << endl; //size of pointer is same in all data type 
	cout << " Size of integer is "<< sizeof(p2) << endl;
	
}
