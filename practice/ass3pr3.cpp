/*Write a C++ program to create a call center program using switch-case statement
-> first take a input from user and get any number
if user will press
1-selected language English 
2-selected language Hindi 
3-selected language Bhojpuri */

#include<iostream>
using namespace std;
int main()
{
	int no;
	cout<<"Enter no between 1 to 3 "<<endl;
	cin>>no;
	switch (no){
	case 1:
		cout<<"selected language English";
		break;
	case 2:
		cout<<"selected language Hindi";
		break;
	case 3:
		cout<<"selected language Bhojpuri";
		break;
	default:
		cout<<"invalid choice";
		break;
	}
	
}
