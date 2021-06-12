//Expressions with reference type exexmlified by string assignments
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void strToUpper(string &);

int main()
{
 string text1("Test with assignments \n");
 cout<<text1<<endl;
 strToUpper(text1);
 cout<<text1<<endl;

 string text2("Inside the Text2");
 cout<<text2<<endl;
 strToUpper(text2);
 cout<<text2<<endl;

 string text3("Inside the text3");
 cout<<text3<<endl;
 strToUpper(text3 += "Cheer you up! \n");
 cout<<text3<<endl;
return 0;
}
void strToUpper (string &str)
{
 int len = str.length();
 for(int i=0;i<len;++i)
  str[i] = toupper(str[i]);
}
