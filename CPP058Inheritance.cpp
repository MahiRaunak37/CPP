/*
 The method by which property of an object of a class gets property of object of another class
  derivation of a class from an existing class
	existing class ---------->>>>>> Base class (super class)
	new class  -------------->>>>>> derived class	(sub class)

    syntax:-
	class subclass_name:access_mode base_class_name
	{
	 body of subclass
	}
*/

//C++ program to demonstrate implementation of Inheritance
#include <iostream>
using namespace std;

class parent		//Base class
{
 private:

 public:
  int id_p;
};

//subclass inheriting form Base class (parent)
class child:public parent
{
 public:
  int id_c;
};

int main() 		//main function
{
 child obj;		//creating a object of child class
 obj.id_c = 7;		//defining the attribute of child class using same obj of child class
 obj.id_p = 8;		//defining the attribute of parent class using same  obje of child class
 cout<<"child id is "<<obj.id_c<<endl;		//displaying the value of child class using child class
 cout<<"parent id is "<<obj.id_p<<endl;		//displaying the value of parent class using child class
 return 0;
}
