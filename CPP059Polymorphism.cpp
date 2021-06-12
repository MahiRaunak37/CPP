/*
 The process by which same function name have availability to behave differently in different class or in same class.
	Function overloading
	operator overloading
*/
//C++ program for implementing inheritance
#include <iostream>
using namespace std;

class animal				//Base class
{
 public:
  void animalsound()
  {
   cout<<"The animal makes a sound \n";
  }
};

//Derived class
class pig: public animal
 {
  public:
   void animalsound()
	{
	 cout<<"The pig say: wee wee \n";
	}
 };

//Derived class
class Dog: public animal
{
 public:
  void animalsound()
  {
   cout<<"The dogs says: bow wow \n";
  }
};

int main()			//Main class
{
 animal myanimal;
 pig mypig;
 Dog myDog;
 myanimal.animalsound();
 mypig.animalsound();
 myDog.animalsound();
 return 0;
}
