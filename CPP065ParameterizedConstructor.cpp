/*
It is possible to pass arguments to constructors. Typically, these arguments help initialize an object when it is created. To 
create a parameterized constructor, simply add parameters to it the way you would to any other function. when you define the 
constructor's body, use the parameters to initialixe the object
*/

#include <iostream>
using namespace std;

class point
{
 private:
	int x,y;
 public:
	//parameterized constructor
	point(int x1, int y1)
	 {
	  x=x1;	y=y1;
	 }

	int getx()
	{
	 return x;
	}

	int gety()
	{
	 return y;
	}
};

int main()
{
 //constructor called
  point p1(10,15);
 //Access values assigned by constructor
 cout<<"p1.x  "<<p1.getx()<<endl<<"p1.y "<<p1.gety()<<endl;
 return 0;
}
