#include <iostream>
using namespace std;

class sample
{
 int m;
 void read(void);
 public:
	void update(void);
	void write(void);
};

void sample::update(void)
{
 read();
}

int main()
{
 sample sam;
 //1st method
 sam.read();
 //2nd method
 sam.update();
 return 0;
}
