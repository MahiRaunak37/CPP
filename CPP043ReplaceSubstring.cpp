//Replacing a substring
#include<iostream>
#include <string>
using namespace std;

int main()
{
 string s1,s2;
 s1="There they go again!";			//declaration and definition of s1
 s2="Bob and Bill";				//declaration and definition of s20
 s1.replace(6,4,s2);				//4 character at index start from 6 are replace by s2 (There Bob and Bill go again!
 cout<<s1<<endl;
 return 0;
}


