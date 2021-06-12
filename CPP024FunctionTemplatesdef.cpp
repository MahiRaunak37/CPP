/*
Function template definition
C++ has the ability to define functions with generic types, known as function templates. Defining a function template follows the 
same syntax as a regular function, except that it is preceded by the template keyword and a series of template parameters enclosed in
angular-backets<>.
 	template <template-parameters> function-declaration
 The template parameters are a series of parameters separated by commas. These parameters can be generic template types by specifying
either the class or typename keyword followed by an idetifier. The identifier can then be used in function declaration as if it was a
regular type. For example, a generic sum function could be defined as:
	template <class SomeType>
	SomeType sum(SomeType a, SomeType b)
	 {
		return a+b;
	 }
Example:-
	x=sum<int>(a,b);
 The function sum<int> is just one of the possible instantiations of function template sum.
	int sum(int a, int b)
 	{
	 return a+b;
	}
*/
#include <iostream>
using namespace std;
 template <class T>
 T sum(T a, T b)
 {
  T result;
  result = a+b;
  return result;
 }

int main()
{
 int i=5, j=6,k;
 double f=2.0, g=0.5,h;
 k=sum<int>(i,j);
 h=sum<double>(f,g);
 cout<<k<<'\n';
 cout<<h<<'\n';
 return 0;
}
