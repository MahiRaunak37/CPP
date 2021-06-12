//Methods outside class
#include <iostream>
using namespace std;

class myclass
 {
  private:
	//Inside the private
  public:
	void myMethod();			//Methods/function declaration
 };

//Methods / function definition outside the class
 void myclass::myMethod()
 {
  cout<<"hello World!"<<endl;
 }

int main()
{
 myclass myobj;			//Create object of class 
 myobj.myMethod();		//call the method
 return 0;
}
