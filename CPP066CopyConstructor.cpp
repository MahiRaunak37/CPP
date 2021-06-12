/*
A copy constructor is a member funciton that initializes an object using another object of the same class. a copy constructor has 
the following gerenal function prototype:
	className (const className &old_obj);
*/

#include <iostream>
using namespace std;

class point
{
 private:
	int x,y;
 public:
	point(int x1, int y1)
	{
	 x=x1; y=y1;
	}

 point(const point &p1)
 {
  x=p1.x;
  y=p1.y;
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
 point p1(10,15);		//Normal constructor is called here
 int p2 = p1;			//Copy constructor is called here

//Access values assigned by constructor
 cout<<"p1.x  "<<p1.getx()<<endl<<"p1.y  "<<p1.gety()<<endl;
 cout<<"p2.x  "<<p2.getx()<<endl<<"p2.y  "<<p2.gety()<<endl;
 return 0;
}
