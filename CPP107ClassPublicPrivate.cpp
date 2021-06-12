#include <iostream>
using namespace std;

class test
{
 private:
	int x;
	int y;
 public:
	int z;
};

int main()
{
 test testObj;

 //testObj.x= 100;
 //testObj.y= 200;
 cout<<"Enter the value of z:- ";
 cin>>testObj.z;
 cout<<"Value of z is:- "<<testObj.z<<endl;
 return 0;
}
