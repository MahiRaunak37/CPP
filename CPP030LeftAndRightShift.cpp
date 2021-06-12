//Left and Right shift in bit Operator
#include<iostream>
int main()
{
 int a = 7;
 int b = a<<1;
 int c = a>>1;
 std::cout<<"\n Before shift: - "<<a<< "\n After Shift:- "<<b<<"\t"<<c<<std::endl;
 return 0;
}

/*
 Before Shift
	a = 7 = 0111b
 After Left Shift
	b= 1110b = 14
 After Right Shift
	c= 0011b = 3
*/
