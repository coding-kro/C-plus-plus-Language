#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string firstName, lastName;
	
	cout<<"Enter your first name: ";
	cin>>firstName;
	
	cout << "Enter your Last Name: ";
	cin >> lastName;
	
	reverse(firstName.begin(), firstName.end());
	reverse(lastName.begin(), lastName.end());
	
	cout << "Reversed name: " << lastName << " " << firstName<<endl;
	
	return 0;
}
