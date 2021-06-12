//Area of Rectangle using function
#include <iostream>
#include <iomanip>
using namespace std;
double Ar(double, double);

int main()
{
 double L,B;
 double A;
 cout<<"Enter the length of Rectangle:- ";
 cin>>L;
 cout<<"Enter the breath of Rectangle:- ";
 cin>>B;
 A = Ar(L,B);
 cout<<"Area of Rectangle:- "<<setw(5)<<A<<endl;
 return 0;
}

double Ar(double L,double B)
{
 return L*B;
}
