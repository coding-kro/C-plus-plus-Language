//Write a program to get the age of user and print it also check is eligible or not for voting?
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age"<<endl;
	cin>>age;
	if(age>18){
		cout<<"You are eligible for voting.";
	}
	else{
		cout<<"You are  not eligible for voting.";	
	}
	return 0;
} 
