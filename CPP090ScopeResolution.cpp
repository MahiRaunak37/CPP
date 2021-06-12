#include <iostream>
using namespace std;

int n1=10;

int main()
{
 int n1=20;
 cout<<"\nLocal varible:- "<<n1<<endl;
 cout<<"\n Global Variable:- "<<::n1<<endl;
 return 0;
}
