#include <iostream>
using namespace std;

class sum
{
 private:
	int a,b,a1=20,b1=40,d1=30;
 public:
	int c;
	sum(int,int);
	sum();
	sum(int,int,int);
};
sum::sum(int x1,int y1,int z1)
{
 a1=x1; b1=y1; d1=z1;
 c=a1+b1+d1;
}

sum::sum(int x, int y)
{
 a=x; b=y;
 c=a+b;
}

sum::sum()
{
 cout<<c<<endl;
}

int main()
{
 sum(20,30,40);
 sum(10,20);
 sum();
 return 0;
}
