//Write a C++ program to print the name, surname and email line by line (using endl).
#include<iostream>
using namespace std;
int main()
{
	string name, surname, email;
	cout<<"Enter your name, surname, email"<<endl;
	cin>>name>>surname>>email;
	cout<<"Name: "<<name<<endl<<"Surname: "<<surname<<endl<<"Email: "<<email<<endl;
	return 0;
}

