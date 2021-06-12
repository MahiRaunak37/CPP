//Inserting a Substring in a String
#include <iostream>
#include <string>
using namespace std;

int main()
{
 string s1,s2;				//String declaration
 s1="Raunak Mahi";			//String definition
 s2="Kumar ";
 s1.insert(7,s2);			//inserting s2 string into s1
 cout<<s1<<endl;
 return 0;
}
