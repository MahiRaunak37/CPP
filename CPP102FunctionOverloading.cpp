//Function volume() is overloading three times
#include <iostream>
using namespace std;

//Declarations (prototupes)
 int volume(int);
 double volume(double, int);
 long volume(long, int, int);
int main()
{
 cout<<volume(10)<<endl<<volume(2.5,8)<<endl<<volume(100l,75,15)<<endl;
 return 0;
}

//Function definitions

 int volume(int s)
 {
  return(s*s*s);
 }

 double volume(double r, int h)
 {
  return(3.14519*r*r*h);
 }
 long volume(long l, int b, int h)
 {
  return(l*b*h);
 } 
