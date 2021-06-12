//Visibility of functin prototypes and declarations


/*
//In C++, Code Must be declared or defined before usage
#include <iostream>
int main()
{
 demo(2);	//error: demo is called, but has not yet been declared
}

void demo(int x)	//The later definition is not known in main
{
  return x;
}
*/


	//There are two ways to resolve this issue
/*
//1. Putting either the defination or declaration of demo() beforeits usage in main()
#include<iostream>
int demo(int x)		//Declare the demo function and body first
{
 return x;
}

int main()
{
 std::cout<<demo(5);		//demo(5) is completely defined, defore hand. so it can be cakked here
 return 0;
}
*/

//2. Forward-declare:-  In this the funciton by putting only a "prototype" declaration before its usage and then defined the function body later.
#include<iostream>
void demo(int);		//Prototype declaration of demo, seen by main, Must specify  return type, name, and argument list types

int main()
{
 demo(5);		//demo is known in program, called even though its body is not yet defined
 return 0;
}
void demo(int x)		//here definition and declaration are same as the prototype of the funtion
{
 std::cout<<"\n Number is :- "<<x<<std::endl;	//output stream
}
