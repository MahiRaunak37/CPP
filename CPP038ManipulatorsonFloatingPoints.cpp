//Manipulators formatiing floating- point numbers
#include <iostream>
using namespace std;
int main()
{
 double x = 12.00;
 cout.precision(4);				//Set percision of the given number in variable in x
 cout<<"By default:-  "<<x<<endl;		//default output of x is 12
 cout<<"Showpoint:- "<<showpoint<<x<<endl;	//showpoint output of x is 12.00
 cout<<"fixed:-  "<<fixed<<x<<endl;		//fixed output of x is 12.0000
 cout<<"scientific:-  "<<scientific<< x <<endl;	//Scientific output of x is 1.2000e+01
 return 0;
}
