#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
 char* ptr;
 ptr = new char[5];
 strcpy(ptr, "bye");
 ptr[0]= 'u';
 cout<<ptr;

 delete []ptr;
 ptr =NULL;
 return 0;
}

