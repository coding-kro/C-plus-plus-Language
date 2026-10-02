#include<iostream>
using namespace std;
class Enclosing {        
   private:     
       int x;  
   class Nested {  
      int y;  
	  public:   
      void NestedFun(Enclosing *e) {  
      e->x=85;
        cout<<e->x;  
      }         
   };
   public:
   	void disp()
   	{
   		Enclosing::Nested n1;
   		n1.NestedFun(this);
	   }
}; 
  int main()  
{       
Enclosing e1;
e1.disp();
 } 
