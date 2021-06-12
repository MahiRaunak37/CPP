// A function friendly to two classes
#include <iostream>
using namespace std;

class abc;		//forward declaration

class xyz
{
 private:
	int x;
 public:
	void setvalue(int i)  {	x=1; }
	friend void max(xyz, abc);
};

class abc
{
 private:
	int a;
 public:
	void setvalue(int i)	{ a = i; }
	friend void max(xyz,abc);
};

void max(xyz m, abc n)
{
 if(m.x >= n.a)
	cout<<m.x<<endl;
 else
	cout<<n.a<<endl;
}

int main()
{
 int n1,n2;
 cout<<"enter the 1st no:- ";
 cin>>n1;
 cout<<"Enter the 2nd no:- ";
 cin>>n2;
 abc Abc1;
 Abc1.setvalue(n1);
 xyz Xyz1;
 Xyz1.setvalue(n2);
 max(Xyz1,Abc1);
 return 0;
}

