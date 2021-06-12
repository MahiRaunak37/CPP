//Erasing a substring
#include <iostream>
#include <string>
using namespace std;

int main()
{
 string s="Raunak kumar mahi";			//declare and definition of string
 s.erase(7,5);					//Erase 5 character form index no. 7 in string
 cout<<s<<endl;					//output of string
 return 0;
}
