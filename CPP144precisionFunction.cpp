//Precision setting with precision()
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 cout<<"Precision set to 3 digits \n\n";
 cout.precision(3);

 cout.width(10);
 cout<<"Value";
 cout.width(15);
 cout<<"Sort of value"<<"\n";

 for(int n=1;n<=5;n++)
 {
  cout.width(8);
  cout<<n;
  cout.width(13);
  cout<<sqrt(n)<<endl;
 }

 cout<<"\n Precision set to 5 digits";
 cout.precision(5);
 cout<<"sqrt(10) = "<<sqrt(10)<<endl;
 cout.precision(0);
 cout<<"Sqrt(10) = "<<sqrt(10)<<endl;
 return 0;
}
