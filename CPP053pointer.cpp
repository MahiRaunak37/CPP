//Print the value and addressess of variables

#include <iostream>
using namespace std;

int var, *ptr;		//Creating integer type variable 'var' and pointer type variable 'ptr' as a global variable

int main()
{
 var =100;		//define the value of variable 'var' as 100
 ptr = &var;		//Storing the address of var variable in pointer variable
 cout<<"Value of var:- "<<var<<"\t Address of var:- "<<&var<<endl;
 cout<<"Value of ptr:- "<<ptr<<"\t Address of ptr:- "<<&ptr<<endl;
 cout<<"Value at var using ptr:- "<<*ptr<<endl;
 return 0;
}
