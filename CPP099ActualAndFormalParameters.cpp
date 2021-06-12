//Swapping of two numbers using call by value and call by reference 
#include <iostream>
using namespace std;

void swapV(int &a, int &b);
void swapR(int* a, int* b);

int main()
{
 int n1,n2;
 cout<<"Enter the value of n1:- ";
 cin>>n1;
 cout<<"Enter the value of n2:- ";
 cin>>n2;
 cout<<"Before Swapping:- "<<n1<<"\t"<<n2<<endl;
 swapR(&n1,&n2);
 cout<<"After Swapping Using Reference:- "<<n1<<"\t"<<n2<<endl;
 swapV(n1,n2);
 cout<<"After Swapping using Value:- "<<n1<<"\t"<<n2<<endl;
 return 0;
}

void swapV(int &a,int &b)
{
 int temp;
 temp= a;
 a=b;
 b=temp;
}

void swapR(int *a, int *b)
{
 int t;
 t=*a;
 *a=*b;
 *b=t;
}
