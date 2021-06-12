/* 
   The process of separating necessary data from unnecessary data is called Abstraction
   The properties that we seperate data are said to be 'Abstract data type'
*/

//Abstraction using C++
#include <iostream>
using namespace std;

class implementAbstraction
{
 private:
	int a,b;		//Attributes a and b are define as a private members
 public:
	//methods to set values of private memebers
	void set(int x,int y)
	 {
	  a=x;			//Assignning the value of a & b in the public
	  b=y;
	 }

	void display()		//display tthe value of a & b in the public using abstraction
	 {
	  cout<<"a= "<<a<<endl;
	  cout<<"b=  "<<b<<endl;
	 }
};

int main()
{
 implementAbstraction Absobj;			//creating object of class implementAbstraction
 Absobj.set(10,20);				//Accessing the attributes & function and set th values
 Absobj.display();				//Printing the value
 return 0;
}
