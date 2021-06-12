// function example
/*
functions allow to structure program in segments of code to perform individual tasks.
type name (parameter1, parameter2,......)
 {
  statements
 }
-where type is the type of the value returned by the function.
-Name is the identifie by which the function can be called.
-parameters (as many as needed):Each parameter consists of a type followed by an identifier, with each parameter being separated form
 the next by comma. Each parameter looks very much like a regular variable declaration(for example:int x),and in fact acts within the
 function as a regular variable which is loca to the function. The purpose of parameters is to allow passing arguments to the functi-
 on from the location where it is called from.
-statements is the function's body. It is a block of statements surrounded by braces{} that specify what the function actually does.
*/
#include <iostream>
using namespace std;

int addition(int a,int b)
{
 int r;
 r=a+b;
 return r;
}

int main()
{
 int z;
 z = addition(5,3);
 cout<<"The result is "<<z<<"\n";
}
