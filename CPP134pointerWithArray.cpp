#include <iostream>
using namespace std;

int main()
{
 int numbers[50], *ptr;
 int n,i;
 cout<<"\n Enter the count: "<<endl;
 cin>>n;
 cout<<"\n Enter the numbers one by one: "<<endl;
 for(i=0;i<n;i++)
  cin>>numbers[i];
 ptr = numbers;
 int sum = 0;

for(i=0; i<n;i++)
{
 if(*ptr%2 == 0)
  sum= sum + *ptr;
  ptr++;
}

cout<<"\n \n Sum of even numbers:- "<<sum;
return 0;
}
