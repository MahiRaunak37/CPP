#include <iostream>
using namespace std;

class rectangle
{
 private:
	int length,width;
 public:
	rectangle(int l,int w)
	{
	 length = l, width = w;
	}

	int area()
	{
	 return length*width;
	}
};

int main()
{
 rectangle rect(3,5);
 cout<<rect.area()<<endl;
 return 0;
} 
