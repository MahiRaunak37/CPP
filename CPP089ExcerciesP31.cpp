#include <iostream>
using namespace std;
void swap(int &n1,int &n2);

int main()
{
 int n1,n2;
 cout<<"Enter the value of n1:- ";
 cin>>n1;
 cout<<"Enter the value of n2:- ";
 cin>>n2;
 cout<<"\n Before Swapping:- "<<n1<<"  "<<n2;
 swap(n1,n2);
 cout<<"\n After Swapping:- "<<n1<<"   "<<n2;
 return 0;
}

void swap(int &b1, int &b2)
{
 int temp;
 temp = b1;
 b1 = b2;
 b2 = temp;
} 
