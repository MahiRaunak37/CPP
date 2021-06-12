//Accessing Strings using pointer and arrays
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
 char str[]= "TEST";
 int len = strlen(str);
 for(int i=0;i<len;i++)
 	cout<<str[i]<<i[str]<<*(str+i)<<*(i+str);
 cout<<endl;
 //strig reverse
 int lenM = len/2;
 len --;
 for(int i=0;i<lenM;i++)
 {
  str[i] = str[i]+str[len-i];
  cout<<str[i]<<endl;
  str[len-i] = str[i] - str[len -i];
  cout<<str[len-i]<<endl;
  str[i] = str[i] - str[len -i];
  cout<<str[i]<<endl;
 }
 cout<<"The string reversed: - "<<str;
return 0;
}
