// Using :: define local and global variable
#include <iostream>
using namespace std;

int var=20;		//global variable

int main()
{
 int var=10;
 cout<<var<<endl;	//define as a local variable
 cout<<::var<<endl;	//define as a global variable
 return 0;
}
