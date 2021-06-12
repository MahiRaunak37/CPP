//Template Function with Explicit Function
#include <iostream>
#include <cstring>
using namespace std;

template <class T>
void display(T x)
{
 cout<<"Overloaded Template Display 1:"<<x<<"\n";
}

template <class T, class T1>
void display(T x, T1 y)
{
 cout<<"Overload Template Display 2: "<<x<<" "<<y<<endl;
}

void display(int x)
{
 cout<<"Explicit display: "<<x<<endl;
}

int main()
{
 display(100);
 display(12.34);
 display(100,12.34);
 display('C');
 return 0;
}

