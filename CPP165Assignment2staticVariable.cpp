/*
					  Assignment 2
				Name:- Ashish Ranjan
				Enroll no.- CUSB2002312009
				Sub:- OOPs with CPP
 Include count  as  static data member in Rectangle class and increrament the count by increment ()
   member function.   Declare three object of Rectangle and increment the count by each object.
   Describe your observations.
*/
#include <iostream>
using namespace std;

class rect
{
 private:
  int len;
  int wid;
 public:
  int static count;
  int length=len;
  int width=wid;
  int area;

  void input()
   {
    cout << "Enter length of rectangle:";
    cin >> length;
    cout << "Enter width of rectangle:";
    cin>>width;
    count++;
   }

  void findArea()
  {
    area = length * width;
  }

  void display()
  {
   cout << "Area of rectangle is:" << area<<endl;
   cout<<"count:- "<<count<<endl;

   }
};


int rect :: count;

int main() {

    rect rect1,rect2,rect3,rect4,rect5;

    rect1.input();
    rect1.findArea();
    rect1.display();

    rect2.input();
    rect2.findArea();
    rect2.display();

    rect3.input();
    rect3.findArea();
    rect3.display();

    rect4.input();
    rect4.findArea();
    rect4.display();

    rect5.input();
    rect5.findArea();
    rect5.display();
    return 0;
}
