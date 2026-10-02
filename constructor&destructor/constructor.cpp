//#include<iostream>
//using namespace std;
//class constructorex
//{
//	public:
//		int x, y;
//		constructorex()
//		{
//			cout<<"This is default constractor";
//		}
//		constructorex(int x1, int y1)
//		{
//			x=x1;
//			y=y1;
//		}
//		void disp()
//		{
//			cout<<endl<<"sum = "<<x+y<<endl;
//		}
//		~constructorex()
//		{
//			cout<<"Destructor Executed";
//		}
//};
//int main()
//{
//	constructorex c1(61,60),c2;
//	c1.disp();
//}

//#include<iostream>
//using namespace std;
//
//class Car {
//public:
//    string model;
//    int year;
//
//    // Constructor
//    Car(string m, int y) : model(m), year(y) {
//        cout << "Car created: " << model << ", " << year << endl;
//    }
//
//    // Destructor
//    ~Car() {
//        cout << "Car destroyed: " << model << endl;
//    }
//};
//int main() {
//    Car myCar("Toyota", 2022); // Constructor is called here
//    // Destructor will be called automatically when myCar goes out of scope
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//// Base class
//class Animal {
//public:
//    
//	string name;
//    Animal(string name)// : name(name) {}
//    {
//    	this->name=name;
//	}
//    
//    void eat() {
//        cout << name << " is eating." << endl;
//    }
//};
//
//// Derived class
//class Dog : public Animal {
//public:
//    Dog(string name) : Animal(name) {}
//   
//    void bark() {
//        cout << name << " is barking." << endl;
//    }
//};
//
//int main() {
//    Dog myDog("Buddy");
//    myDog.eat(); // Inherited from Animal
//    myDog.bark(); // Specific to Dog
//    return 0;
//}

#include<iostream>
using namespace std;
class Complex {
public:
    double real, imag;
    Complex(double r = 0, double i = 0) //: real(r), imag(i) {}
    {
    	real = r;
    	imag = i;
	}

    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }
    
     void display() const {
        cout << real << " + " << imag << "i\n";
    }
};

int main() {
    Complex c1(1, 2), c2(3, 4);
    Complex c3 = c1 + c2; // Uses the overloaded + operator
    c3.display();
    return 0;
}

