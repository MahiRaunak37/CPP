//Introduction of objects and class in c++ programming language
#include <iostream>
#include <string>
using namespace std;

class myclass			//creating a class
{
 private:			//Access specifier (private and public)
	//Inside the private 

 public:
	//Inside the public
	int myNum;		//Attribute (int variable)
	string mystring;	//Attribute (string variable)
};

int main()
{
 myclass myobj;			//creating an object of class myclass as myobj;
 myobj.myNum = 40;		//Access Attributes and set values
 myobj.mystring = "Raunak";

 cout<<myobj.myNum<<endl;	//print value
 cout<<myobj.mystring<<endl;
 return 0;
}
