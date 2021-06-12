/*
union is a user- defined datatype. All the members of union share same memory location. size of union is decided by the size of 
largest member of union
syntax:-
 union union_name
  {
   member definition;
  } union_variables;
*/

#include <iostream>
using namespace std;

union data
{
 int i;
 float f;
 }data, data1;

int main()
{
 cout<<"Memory size accupied by data:- "<<sizeof(data)<<"\t"<<sizeof(data1)<<endl;
 return 0;
}
