/*
write a program to find sum of digits of a number using while/for loop.
you need to define digit class having data member as num(integer variable) and sum function. 
you also define display(to display sum) and get_input function(to take input num).
*/
#include <iostream>
using namespace std;

class sumOfDigits
{
 private:
   int Number;
   int Sum=0;
 public:
   int sum= Sum;
   int number= Number;

   int sumOfdigits(int n);
};

int sumOfDigits::sumOfdigits(int number)
{
  while(number!=0)
   {
	sum = sum + number%10;
	number = number/10;
   }
 return sum;
}

int main()
{
 sumOfDigits SoD;
 cout<<"Enter the number:- ";
 cin>>SoD.number;
 cout<<SoD.sumOfdigits(SoD.number)<<endl;
 return 0;
}
