#include <iostream>
using namespace std;

typedef void (*FunPtr)(int , int);

void Add(int i, int j)
{
 cout<< i<<" + "<<j<<" = "<<i+j;
}

void Sub(int i, int j)
{
 cout<<i<<" - "<<j<<" = "<<i-j;
}

int main()
{
 FunPtr ptr;
 ptr = &Add;
 ptr = &Sub;
 ptr(3,2);
 cout<<endl;
 return 0;
}
