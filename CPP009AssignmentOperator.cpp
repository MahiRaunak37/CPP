//Assignment Operator (=)
#include <iostream>
using namespace std;
int main()
{
 int a,b;		//defining the a & b are integer variable
 a=10;			//Assigning a=10
 b=4;			//Assigning b=4;
 a=b;			//overriding the value of a(before a=10, a=b then  a=4)
 b=7;			//overriding the value of b(before b=4, after b=7)

 cout<<"a:- "<<a<<"\n b:- "<<b<<endl;
 return 0;
}
