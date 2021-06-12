//BitWise Operators
#include <iostream>
int main()
{
 int a = 5 ;		//0101b
 int b = 12;		//1100b
 int c = a|b;		//1101b (bitwise OR of a and b)
 int d = a&b;		//0100b (bitwise And of a and b)
 int e = a^b;		//1001b (bitwise Ex-OR of a and b)
  std::cout<<"a = " << a << ", b = "<<b<<"\n Bitwise OR = "<<c<<"\n Bitwise AND = "<<d<<"\n BitWise Ex-OR = "<<e<<std::endl;
 return 0;
}
/*

Bitwise OR operator
 0	1	0	1
 1	1	0	0
---------------------------
 1	1	0	1
---------------------------

Bitwise AND operator
 0	1	0	1
 1	1	0	0
---------------------------
 0	1	0	0
---------------------------

Bitwise Ex-OR operator
 0	1	0	1
 1	1	0	0
---------------------------
 1	0	0	1
---------------------------
*/
