//Function overloading in cpp 
#include <iostream>
using namespace std;

void sum(int n1, int n2)
{
 cout<<"Sum of Integer is "<<n1+n2<<endl;
}

void sum(float n1, float n2)
{
 cout<<"Sum of Integer is "<<n1+n2<<endl;
}

int main()
{
 sum(263,675);
 float n1= 2.65, n2=3.65;
 sum(n1,n2);
 return 0;
}

