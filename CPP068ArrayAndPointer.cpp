//Using Array of the char and pointer to char
#include <iostream>
#include <string>
using namespace std;

int main()
{
 cout<<"Demonstrating arrays of char and pointer to char.\n"<<endl;
 char text[] ="Good Morning", name[] = "Bill";
 char *cPtr= "hello";

 cout<<cPtr<<name<<"\n"<<text<<endl;
 cout<<"The text "<<text<<"starts at address "<<(void*)text<<endl;
 cout<<text + 6<<endl;
 cPtr = name;
 cout<<"This is the "<<*cPtr<<" of "<<cPtr<<endl;
 *cPtr ='k';
 cout<<"Bill can not "<<cPtr<<"!\n"<<endl;
 return 0;
}
