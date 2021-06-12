//Recursive Function in C++
//Demostrates the principle of recursion by a function, which reads a line from the keyboard and output it in reverse order
#include <iostream>
using namespace std;

void getputs(void);

int main()
{
 cout<<"Please enter a line of text:- \n";
 getputs();
 cout<<"\n Bye bye!" <<endl;
 return 0;
}

void getputs()
{
 char c;
 if(cin.get(c) && c!='\n')
   getputs();
  cout.put(c);
}
