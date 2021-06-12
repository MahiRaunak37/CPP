/* 
Static variables
 1.static variable are also known as class variables
 2.These variables are declared similarly as instance variables, the differnce is that static variables are declared using the static
   keyword withing a class outside any method(function), constructor or block.
 3.Unlike instance variables, we can only have one copy of a static  variable per class irrespective of how many objects we create.
 4.Static variables are created at the start of program execution and destoyed aoutomatically when execution ends;
*/
//CPP code for static variables
#include <iostream>
#include <string>
using namespace std;
class demo
{
 private:
  static int roll;
  string name="RAUNAK";
 public:
   void display()
     {
	cout<<roll<<"\n";
	cout<<name;
     }
};
int demo::roll =  46;

int main()
{
  demo obj;
  obj.display();
 return 0;
}

