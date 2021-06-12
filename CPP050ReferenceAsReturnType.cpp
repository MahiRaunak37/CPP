//Function with return value with reference type
#include <iostream>
#include <string>
using namespace std;
double &refMin(double &, double &);

int main()
{
 double x1=1.1, x2= x1+0.5,y;
 y = refMin(x1,x2);
 cout<<"x1 = "<<x1<<"   "<<"x2 = "<<x2<<endl;
 cout<<"Minimum: "<<y<<endl;

 ++refMin(x1,x2);
 cout<<"x1 = "<<x1<<"  "<<"x2 = "<<x2<<endl;

++refMin(x1,x2);
 cout<<"x1 = "<<x1<<"  "<<"x2 = "<<x2<<endl;

refMin(x1,x2)=10.1;
 cout<<"x1 = "<<x1<<"  "<<"x2 = "<<x2<<endl;

refMin(x1,x2)=5.0;
 cout<<"x1 = "<<x1<<"  "<<"x2 = "<<x2<<endl;
return 0;
}

double &refMin (double &a, double &b)
 {
 return a<=b?a:b;
 }
