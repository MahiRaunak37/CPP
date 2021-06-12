//C++ program to demonstrate local variables
#include <iostream>
using namespace std;

void demo()
{
 int roll;	//local variable roll inside demo function.
 cout<<"\n Enter the roll no.:- ";
 cin>>roll;
 cout<<"\n Roll:- "<<roll;
}
int main()
{
 demo();
 return 0;
}
