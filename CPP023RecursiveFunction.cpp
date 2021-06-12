//Factorial calculator calculator using recursive function
#include <iostream>
using namespace std;

long factorial (long a)
{
 if(a>1)
   return (a*factorial(a-1));
 else
   return 1;
}

int main()
{
 long number;
 cout<<"\n Enter the number:- ";
 cin>>number;
 cout<<"\t\t\t"<<number <<"! = "<<factorial(number)<<"\n";
 return 0;
}
