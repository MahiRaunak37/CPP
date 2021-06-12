/*
An array is a series of elements of the same type placed in contiguous memory locations that can be individually referenced by adding
an index to a unique identifier.
	type name [elements];
*/
#include <iostream>
using namespace std;
int arr[5];
int i;

int main()
{
 for(i=0;i<5;i++)
 {
  cout<<"\n Enter the element at position "<<i<<"th is:- ";
  cin>>arr[i];
 }
 cout<<"\n Element are:- ";
 for(i=0;i<5;i++)
   cout<<arr[i]<<'\t';
 cout<<"\n";
return 0;
}
