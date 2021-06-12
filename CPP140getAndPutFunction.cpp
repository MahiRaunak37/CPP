//Character I/O with get() and put() function
#include <iostream>
using namespace std;

int main()
{
 int count =0;
 char c;
 cout<<"Input Text \n";
 cin.get(c);
 while(c!='\n')
 {
   cout.put(c);
   count++;
   cin.get(c);
 }

cout<<"\n Number of character = "<<count<<endl;
return 0;
}
