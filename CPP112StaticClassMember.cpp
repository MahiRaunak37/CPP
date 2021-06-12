//Static Data member in c++
#include <iostream>
using namespace std;

class item
{
 private:
	static int count;
	int number;
 public:
	void getdata(int a)
	{
	 number =a;
	 count ++;
	}

	void getcount(void)
	{
	 cout<<"count: "<<count<<"\n";
	}
};

int item :: count;

int main()
{
 item a, b, c;
 a.getcount();
 b.getcount();
 c.getcount();

 a.getdata(100);
 b.getdata(200);
 c.getdata(300);

 cout<<"After reading data "<<"\n";

 a.getcount();
 b.getcount();
 c.getcount();
return 0;
}

/*
The static variable count is initialized to zero when the objects are creatd. The count is incremented whenver
the data is read into an object. Since the data is read into objects three times, the variables count is
incrented three times. Because there is only one copy of count shared by all the three objects, all the
three output statements cause the value 3 to be displayed
*/
