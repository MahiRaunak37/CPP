//Invoking Function that Generates Exception
//Throw point outside the try block
#include <iostream>
using namespace std;

void divide(int x, int y, int z)
{
 cout<<"\n We are inside the function\n";
 if((x-y)!=0)
  {
   int R = z/(x-y);
   cout<<"Result = "<<R<<endl;
  }
 else
   throw(x-y);			//throw point
}

int main()
{
 try
 {
  cout<<"We are inside the try block\n";
  divide(10,20,30);				//Invoke divide()
  divide(10,10,30);
  }
 catch(int i)
  {
   cout<<"Caught the exception "<<i<<endl;
   }
 return 0;
}
