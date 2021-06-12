/*
 The wrapping up of data and functions into a single unit (called class) is known as encapsulation.
 Encapsulation is the most striking features of a class. The data is not accessible to the outside world, and only those function
 which are wrapped in the class can access it.
 The outcome of Abstreaction is Encapsulation
*/

//C++ Program to explain Encapsulation
#include <iostream>
using namespace std;

class Encapsulation
{
 private:
  //data is hidden from outside of world
  int x;

 public:
  //function to set value of variable x
  void set(int a)
  {
   x=a;
  }

 //function to return value of variable x
  int get()
  {
  return x;
  }
};

int main()			//main function
{
 Encapsulation EnpObj;
 EnpObj.set(5);
 cout<<EnpObj.get()<<endl;
 return 0;
}
