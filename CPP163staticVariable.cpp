//Static variable in CPP
#include <iostream> //including header file
using namespace std;	//using namespace
void func();	//function prototype

int main()		//main function
{
 for(int i=0;i<5;i++)
   func();		//function call
 return 0;
}

void func()		//function defintion
{
 static int S = 4;	//static memeber function
 int V1 = 5;
 cout<<"Before:- \n"<<"S:- "<<S<<endl;
 cout<<"V1:- "<<V1<<endl;
 S++; V1++;	//increment inside the function
 }

