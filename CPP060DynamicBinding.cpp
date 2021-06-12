/*
Binding refers to the linking of a procedure call to the code to be executed in response to the call. Dynamic blinding (also known
 as late binding) means that he code associated with a given procedure call is not known until th etime of the call at run-time.
 it is associated with polymorphism and   inhertance. A function call associated with a polymorphic reference depends on the dynamic
 type of that reference
*/

//Dynamic binding program in c++
#include <iostream>
using namespace std;

int square (int x)
 {
 return x*x;
 }

int cube (int x)
 {
  return x*x*x;
  }

int main()
{
 int x;
 cout<<"Enter the value of X:- ";
 cin>>x;
 int choice;
 do
 {
 cout<<"Enter 0 for square value, 1 for cube value: \n";
 cin>>choice;
 }
 while( choice < 0|| choice>1);

int(*ptr)(int);
switch(choice)
 {
  case 0:
   ptr =square;
   break;

  case 1:
   ptr = cube;
   break;
 }

cout<<"The result is:- "<<ptr(x)<<endl;
return 0;
}
