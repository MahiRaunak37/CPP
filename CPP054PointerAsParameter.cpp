//Swapping numbers  using pointer as parameters
#include <iostream>
using namespace std;

void swap(float *,float *);		//prototype of swapping function

int main()
{
 float x= 11.1;
 float y = 12.2;
 cout<<"Before Swapping:- "<<"\t"<<x<<"\t"<<y<<endl;
 swap(&x, &y);
 cout<<"After Swapping:- "<<"\t"<<x<<"\t"<<y<<endl;
 return 0;
}
 void swap(float *p1,float *p2)
 {
  float temp;			//declare temporary temp variable
  temp = *p1;
  *p1= *p2;
  *p2 = temp;
 }
