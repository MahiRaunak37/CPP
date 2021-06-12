// write a program to evaluate the following inverstment equation 
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
 float V,P,r, n;
 cout<<"\n Enter the value of P:- ";
 cin>>P;
 cout<<"\n Enter the value of r:- ";
 cin>>r;
 cout<<"\n Enter the value of n:- ";
 cin>>n;

 V = P*(pow((1+r),n));

 cout<<"\nAmount of Compound Interest:- "<<V<<endl<<endl;
 return 0;
}
