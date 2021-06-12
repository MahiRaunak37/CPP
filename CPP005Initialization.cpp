//Initialization of variables
#include <iostream>
using namespace std;

int main()
{
 int a=5;	//c like initization (type identifier = initial_value)
 int b(3);	//constructor initialization {type identifier (initial_value)}
 int c{2};	//uniform initialization [type identifier {initial_value}]
 int result;	//normal initization
 a=a+b;		//Addition operation (a = 5, b=3, a=a+b,a=5+3=8)
 result = a - c;			//result = 8-2=6
 cout<<"\n"<<result<<"\n"<<endl;	//print result
 return 0;				//return to the function
}
