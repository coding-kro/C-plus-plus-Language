#include<iostream>
using namespace std;
struct emp{
	int eid;
	string name;
	float salary;
};
int main(){
	emp e[5];
	for(int i =0; i < 5; i++)
	{
		cout<<"Enter details for employee"<<i+1<<endl;
		cout<<"eid: ";
		cin>>e[i].eid;
		cout<<"name: ";
		cin>>e[i].name;
		cout<<"salary: ";
		cin>>e[i].salary;
		cout<<endl;
	}
	cout<<"Employee Details"<<endl;
	
	for(int i =0; i < 5; i++)
	{
		cout<<endl;
		cout<<"Employee"<<i+1<<endl;
		cout<<"eid: "<<e[i].eid<<endl;
		cout<<"name: "<<e[i].name<<endl;
		cout<<"salary: "<<e[i].salary<<endl;
	}
}
