//Virtual based class inheritance in Cpp
#include <iostream>
using namespace std;

class student
{
 protected:
	int roll_number;
 public:
	void get_number(int a)
	{
	 roll_number = a;
	}

	void put_number(void)
	{
	 cout<<"Roll No:- "<<roll_number<<"\n ";
	}
};

class test : virtual public student
{
 protected:
	float part1, part2;
 public:
	void get_marks(float x, float y)
	{
	 part1 =x;	part2= y;
	}

	void put_marks(void)
	{
	 cout<<"Marks obtained: "<<endl<<"Part1= "<<part1<<"Part2= "<<part2<<endl;
	}
};

class sports : public virtual student
{
 protected:
	 float score;
 public:
	void get_score(float s)
	{
	 score = s;
	}

	void put_score(void)
	{
	 cout<<"Sports wt: "<<score<<endl<<endl;
	}
};

class result : public test, public sports
{
 float total;
 public:
	void display(void);
};

void result :: display(void)
{
 total = part1 + part2 + score;

 put_number();	put_marks();	put_score();
 cout<<"Total Score :- "<<total <<"\n";
}

int main()
{
 result student;
 student.get_number(768);
 student.get_marks(30.5,40);
 student.get_score(7.0);
 student.display();
 return 0;
}
