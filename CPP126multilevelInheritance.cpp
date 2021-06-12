#include <iostream>
using namespace std;

class student					//Base class for test
{
 protected:
	int roll_number;			//protected data member in class student
 public:
	void get_number(int);
	void put_number(void);
};

void student :: get_number(int a)			//class student member function definition
{
  roll_number = a;
}

void student :: put_number()
{
 cout<<"Roll Number:- "<<roll_number <<"\n";
}

class test : public student				//class test is inherited by class student publicly
{
 protected:
	float sub1, sub2;
 public:
	void get_marks(float, float);
	void put_marks(void);
};

void test :: get_marks(float x, float y)		//class test member function definition
{
 sub1 = x;	sub2 = y;
}

void test :: put_marks()
{
 cout<<"Marks in SUB1= "<<sub1<<endl;
 cout<<"Marks in SUB2= "<<sub2<<endl;
}

class result : public test				//class result is publicly inherited by class test
{
 float total;
 public:
  void display(void);
};

void result :: display(void)				//class result memeber function definition
{
 total = sub1 + sub2;
 put_number();
 put_marks();
 cout<<"Total = "<<total <<endl;
}

int main()						//main function definition
{
 result student1;					//creating object of class result  as student
 student1.get_number(111);				//accessing the member function test class because
 student1.get_marks(75.0,59.5);				//result is inherit publicly by based class test
 student1.display();
 return 0;
}

