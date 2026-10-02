#include<iostream>
using namespace std;
 class bca
 {
 	int x, y;
	 public:
	 bca();
	 void display();	
 };
 bca::bca()
 {
 	cout<<"Enter two no. "<<endl;
 	cin>>x>>y;
 }
 void bca::display()
 {
 	cout<<"Sum = "<<x+y;
 }
 int main()
 {
 	bca a1;
 	a1.display();
 }
