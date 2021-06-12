/*
Methods are functions that belongs to the class
	There are two way to define functions that belongs to a class:
	1.Inside class definition
	2. Outside class definition
*/

//Inside class definition example
 #include <iostream>
 using namespace std;

 class myclass
 {
  private:					//Private access specifier
	//Inside the private 
  public:					//Access specifier
	void myMethod()
	{
	 cout<<"Hello World!"<<endl;
	}
};

int main()
{
 myclass myobj;			//create an object of myclass
 myobj.myMethod();
 return 0;
}
