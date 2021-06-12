// return type of funcion with reference
#include <iostream>
using namespace std;

int &sum(int &n1, int &n2);

int main()
{
 int *a,*b,*s;
 cout<<"Enter the value of 1st number:- ";
 cin>>*a;
 cout<<"Enter the value of 2nd number:- ";
 cin>>*b;
 s= sum(a,b);
 cout<<"Sum:- "<<*s;
 return 0;
}

int  &sum(int &n1, int &n2)
{
 int *s;
  s= n1+n2;
 return s;
}

