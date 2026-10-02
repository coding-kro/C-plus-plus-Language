/*Write a C++ program to create a grading system 
->first take a input from user and get the marks 
->if
marks>=70-A grade
marks>=60-B grade
marks>=50-C grade
marks>=40-D grade
else-fail*/
#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter your Marks "<<endl;
	cin>>marks;
	if(marks>=70){
		cout<<"A grade"<<endl;
	}
	else if(marks>=60){
		cout<<"B grade"<<endl;
	}
	else if(marks>=50){
		cout<<"C grade"<<endl;
	}
	else if(marks>=40){
		cout<<"D grade"<<endl;
	}
	else{
		cout<<"fail";
	}
}
