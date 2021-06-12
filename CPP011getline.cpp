//cin with strings using getline
#include <iostream>
#include <string>
using namespace std;
int main()
{
 /*
  
 */
 string mystr;
 cout<<"What's your Name:- ";
 getline(cin,mystr);
 cout<<"hello "<<mystr<<".\n";
 cout<<"what is your favorite team? ";
 getline(cin,mystr);
 cout<<"I like "<<mystr<<" too!\n";
 return 0;
}
