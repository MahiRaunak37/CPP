//Single Inheritance Public
#include <iostream>
using namespace std;

class B					//based class in inheritance
{
 private:
 int a;

 public:
 int b;
 void get_ab();				//public function of class B
 int get_a(void);
 void show_a(void);
};

class D : public B			//class D is derived class and class B is based class which is
{					//access publicy by the class D. it means that the private
 int c;					//value of based class B are inherit by the private value of
 public:				//derived classs D and public of based class is derived by
  void mul(void);			//public of the derived class
  void display(void);
 };

void B :: get_ab(void)			//function definition of based class B
{
 a=5; b= 10;
}

int B :: get_a()
{
 return a;
}

void B :: show_a()
{
 cout<<"a = "<<a<<endl;
}

void D :: mul()
{
 c = b *  get_a();
}

void D :: display()
{
 cout<<"a:- "<<get_a()<<endl;
 cout<<"b:- "<<b<<endl;
 cout<<"c:- "<<c<<endl;
}

int main()
{
 D d;				//creating object of derived class and access the public data form the class
 d.get_ab();			//of both class B & Class D
 d.mul();
 d.show_a();
 d.display();

 d.b = 20;
 d.mul();
 d.display();

 return 0;
}
