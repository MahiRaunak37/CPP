//Callling a manipulator
#include <iostream>
using namespace std;
int main()
 {
  cout<<showpos<<123<<endl;		//showpos show positive(+) sign before 123 (+123){cout.setf(ios::showpos)
  cout<<345<<endl;				//The other positive numbers are printed with their sign as well
  cout<<noshowpos<<567<<endl;		//The output of a positive sign can be canceled by the manipulator noshowpos
					//cout.unself(ios::showpos) 
 return 0;
 }
