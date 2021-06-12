//Write a function that creates a vector of user-given size M using new operator
#include <iostream>
using namespace std;

int main()
{
 int M;
 cout<<"\nEnter the size of array:- ";
 cin>>M;
 int* p= new int[M];	//Here inside () define the value and inside the [] defines size
  if(!p)
   cout<<"Memory allocation is failed \n";
 return 0;
}

