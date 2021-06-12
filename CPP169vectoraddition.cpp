#include <iostream>
using namespace std;

class vector
{
 public:
  int x,y,z;
  int x1=0,y1=0,z1=0,x2,y2,z2;
  void input();
  void sum();
  void display();
};

void vector::input()
{
 cout<<"Enter the 1st vector ";
 cin>>x1>>y1>>z1;
 cout<<"Enter the 2nd vector ";
 cin>>x2>>y2>>z2;
}

void vector::sum()
{
 x = x1+x2;
 y = y1+y2;
 z = z1+z2;
}

void vector::display()
{
 cout<<"after addition of vectors:- ";
 cout<<x<<"i +"<<y<<"j +"<<z<<"k"<<endl;
}

int main()
{
 vector obj;
 obj.input();
 obj.sum();
 obj.display();
 return 0;
}
