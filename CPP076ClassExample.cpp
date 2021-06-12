//Class Example in cpp 
#include <iostream>
#include <string>
using namespace std;

class person
{
 private:
	string name;
	int age;
 public:
	void getdata(void);
	void display(void);
};

void person :: getdata(void)
{
 cout<<"Enter name:- ";
 getline(cin,name);		//Take multiple words as a input in cpp
 cout<<"Enter age:- ";
 cin>>age;
}

void person :: display(void)
{
 cout<<"\n Name:- "<<name<<"\n Age:- "<<age<<endl;
}

int main()
{
 person p;
 p.getdata();
 p.display();
 return 0;
}
