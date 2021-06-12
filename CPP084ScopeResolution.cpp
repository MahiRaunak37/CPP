//Scope Resolution Operator
#include <iostream>
using namespace std;

int m=10;	//global variable 

int main()
{
 int m=20;
 {
  int k=m;
  int  m=30;	//m redeclared again local to inner block
  cout<< "We are in inner block \n";
  cout<<"K ="<< k <<"\n";
  cout<<"M ="<< m <<"\n";
  cout<<"::m = "<< ::m <<"\n";
 }
cout<<"\n We are in outer block \n";
cout<<"m = "<<m<<"\n";
cout<<"::m ="<<::m<<"\n";
return 0;
}
