// Typed constant expressions
#include <iostream>
using namespace std;
const double pi=3.14159;
int main()
{
 double r;
 cout<<"\n Enter the value of Radius:- "<<endl;
 cin>>r;
 double Primeter,Area;
 Primeter = 2*pi*r;
 Area = pi*r*r;
 cout<<"\n Primeter of Circle:- "<<Primeter<<endl;
 cout<<"\n Area of Circle:- "<<Area<<endl;
 return 0;
}
