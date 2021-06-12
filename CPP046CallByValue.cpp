//Call by value in C++
#include <iostream>
using namespace std;

void change(int data);

int main()
{
 int data = 3;
 change(data);
 cout<<"Value of data is:- "<<data<<endl;
 return 0;
}

void change(int data)
{
 data =5;
 cout<<"Value of data is:- "<<data<<endl;
}

/*
	In call by value actual value of argument will not change by changing its formal arguments
*/
