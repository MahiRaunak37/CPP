//Array in CPP to input numbers into an array and output after

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
 int n,arr[10];
 cout<<"Enter the total element:- ";
 cin>>n;
 for(int i=0;i<n;i++)
 {
  cout<<"Enter the element at ["<<i<<"]:- ";
  cin>>arr[i];
 }

 for(int i=0;i<n;i++)
 {
  cout<<arr[i]<<"\t";
 }
cout<<"\n";
return 0;
}
