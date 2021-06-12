//CPP code forn const member function
#include <iostream>
using namespace std;

int main()
{
 const int a = 5;	//creating constant variable
 int b = 10;		//local instance variable
 cout<<"A:- "<<a<<endl;
 cout<<"B:- "<<b<<endl;
 //a++;		//Generates a error
 //its is constant value so it could
 //not be modified or change
 b++;		//incremented
 cout<<"A:- "<<a<<endl;
 cout<<"B:- "<<b<<endl;
 return 0;
}
