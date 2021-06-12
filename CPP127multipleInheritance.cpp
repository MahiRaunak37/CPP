//Multiple Inheritance in cpp
#include <iostream>
using namespace std;

class M						//first base class M
{
 protected:
 	int m;
 public:
	void get_m(int);
};

class N						//second base class N
{
 protected:
	int n;
 public:
	void get_n(int);
};

class P : public M, public N			//class M and N are inherit by the class P
{
 public:
 	void display(void);
};

void M :: get_m(int x)				//defining the funciton of M class
{
 m = x;
};

void N :: get_n(int y)				//defining the function of N class
{
 n = y;
}

void P :: display(void)				//defining the function of P class
{
 cout<<"m = "<< m << endl<< "n = "<<n<<endl<< "m*n= "<<m*n<<endl;
}

int main()
{
 P p;
 p.get_m(10);
 p.get_n(20);
 p.display();
 return 0;
}
