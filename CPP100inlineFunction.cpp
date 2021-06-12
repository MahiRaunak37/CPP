//Inline function in c++
#include <iostream>
using namespace std;

inline float add(float x, float y)
{
	return (x+y);
}

inline float sub(float x, float y)
{
	 return (x-y);
}

inline float mul(float x, float y)
{
	return(x*y);
}

inline double div(double p, double q)
{
 	return (p/q);
}


int main()
{
 float a,b;
 cout<<"Enter the value of a:- ";
 cin>>a;
 cout<<"Enter the value of b:- ";
 cin>>b;
 int n;
 cout<<"Choose any one operation: \n1.Sum \t\t2.Sub \t\t3.Mul \t\t4.Div"<<endl;
 cin>>n;
 switch(n)
 {
  case (1):
	cout<<"After sum:- "<<add(a,b)<<endl;
	break;
  case (2):
	cout<<"After sub:- "<<sub(a,b)<<endl;
	break;
  case (3):
	cout<<"After Mul:- "<<mul(a,b)<<endl;
	break;
  case (4):
	cout<<"After Div:- "<<div(a,b)<<endl;
	break;
  default:
	cout<<"Invalid Input"<<endl;
	break;
  }
 return 0;
}








