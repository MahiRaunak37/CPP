//Searching a Substring
#include <iostream>
#include <string>
using namespace std;

int main()
{
 string youth("Bill is so young, so young");		//Declare and definiton of string youth
 int first = youth.find("young");			//creating integer type variable first which store position of 'y' form left side in string
 cout<<first<<endl;
 int last = youth.rfind("young");			//creating integer type variable last which store position of last 'y' of young  in string youth
 cout<<last<<endl;
 return 0;
}
