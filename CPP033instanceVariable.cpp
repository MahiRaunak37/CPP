/*
  1. Instance variables are non- static variables and are declared in a class outside any method, constructor or block 
  2. An instance variable are declared in a class, these variables are created and destoryed when the object is destroyed
  3. Initilisation of Instance variable is not mandatory
  4. Instance variable can be accessed only by creating objects.
*/

//C++ program to demonstrate instance Variables
#include <iostream>
#include <string>
using namespace std;

class demo
{
 private:
	string name="RAUNAK";		//Instance variable inside the class
	int roll=9;
 public:
	int display()
	 {
	  cout<<name<<"\n"<<endl;
	  cout<<roll;
	 }
};

int main()
{
 demo obj;		//creating object of demo class 
 obj.display();		//calling display() from demo class
 return 0;
}

