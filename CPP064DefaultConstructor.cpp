/*
Constructor is a member function of a class which initialize objects of a class. In C++, Constructor is 
automatically called when object (instance of class) create. It is special member function of the class
1. Constructor has the same name as the class
2. Constructor does not have a return type, and it is public
*/

//Default Constructor in C++
//Default constructor is the constructor does not take any argunment. It has no parameters
#include <iostream>
using namespace std;

class construct
{
 private:
	//Inside the private
 public:
	int a,b;
	construct()			//Default constructor
	{
	 a=10; b=20;
	}
};

int main()
{
 //Default constructor called automatically when the object is created
 construct c;
 cout<<"a:- "<<c.a<<endl<<"b:- "<<c.b<<endl;
 return 0;
}
