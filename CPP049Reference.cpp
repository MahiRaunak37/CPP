/*
The ampersand character, &, is used to define a reference. ex:- 
float x=10.7;
float &rx= x;
 rx is thus a different way of expressing the variable x and belongs to the type "reference to float".
*/

#include <iostream>
using namespace std;
int main()
{
 float x=10.7;
 float &rx=x;
 cout<<x<<endl;
 cout<<rx<<endl;			//output of rx is equivalent of x
 --rx;					//equivalent to --x;
 cout<<rx<<endl;
 return 0;
} 
