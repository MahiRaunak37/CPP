//Searching a Substring
#include <iostream>
#include <string>
using namespace std;

int main()
{
 string youth("Bill is so young, so young");
 int first = youth.find("young");
 cout<<first<<endl;
 int last = youth.rfing("young");
 cout<<last<<endl;
 return 0;
}
