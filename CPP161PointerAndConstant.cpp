#include <iostream>
#include <cstring>
using namespace std;

int main()
{
 char* p;
 p = new char[20];
 char c[]= "hello";
 const char* pc = c;
 pc[2] = 'a';
 pc = p;

 char* const cp = c;
 cp[2] = 'a';
 cp =p;

 const char* const cpc =c;
 cpc[2] = 'a';
 cpc = p;

