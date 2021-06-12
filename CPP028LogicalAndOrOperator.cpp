//Short-circuit evaluation in && and || to not do unnecessary executions.
//if the left hand side of || returns true the right hand side does not need to be evaluated anymore 
#include <iostream>
#include <string>
using namespace std;

bool True(string id)
{
 cout<< "True" <<id<<endl;
 return true;
}

bool False(string id)
{
 cout<<"False"<<id<<endl;
 return false;
}

int main()
{
 bool result;
 result = False("A")|| False("B") && False("C");
 /*
 Short- circuit evaluation skip of C because A is false so we have to evaluate the right of ||, B being false we do not have to
 evaluate C to know that the result is false
 */
 cout<<result<<endl;

 result = True("A") || False("B") && False("C");
 /*
 Short- Circuit evaluation skip of B and C. A is true so we do not have to evaluate. The right of || to know that result is true
 */
 cout<<result<<endl;
 return 0;
}
