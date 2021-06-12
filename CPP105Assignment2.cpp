//Factorial of a number
#include <iostream>
using namespace std;

class factorial
{
 private:
	int n1,n2,fact=1;
 public:
 	void input();
	void factor();
	void display();
};

void factorial::input()
{
 cout<<"\n Enter any number:- ";
 cin>>n1;
}

void factorial::factor()
{
 n2=n1;
 if(n1==0||n2==1)
  cout<<"\n Factorial of number is ["<<n1<<"] is:- 1"<<endl;
 else
  {
 	while(n1>0)
	{
	 fact=fact*n1;
	 n1--;
	}
  }
}

void factorial::display()
{
	cout<<"\n Factorial of ["<<n2<<"] is :- "<<fact<<"\n";
}

int main()
{
 factorial f;
 f.input();
 f.factor();
 f.display();
 return 0;
}
