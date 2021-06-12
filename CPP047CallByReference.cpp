//Call by references
//Address of the variable passed to the function call as the actual parameters.
//The value of the actual parameters could be altered by the formal parameters because the address of the actual parameters passed
#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
 int swap;
 swap=*x;
 *x=*y;
 *y=swap;
}

int main()
{
 int x=500,y=100;
 cout<<"before Swapping:- "<<x<<"\t"<<y<<endl;
 swap(&x,&y);
 cout<<"After swapping:- "<<x<<"\t"<<y<<endl;
 return 0;
}
