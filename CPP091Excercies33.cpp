#include <iostream>
using namespace std;
int main()
{
 int i=5;
 while(i)
 {
  switch(i)
	{
	 default:
	 case 4:
		cout<<"Inside the case 4"<<endl;
	 case 5:
		cout<<"Inside the case 5"<<endl;
	 break;

	 case 1:
               cout<<"Inside the case 1"<<endl;
	 continue;

	 case 2:
                cout<<"Inside the case 2"<<endl;

	 case 3:
                cout<<"Inside the case 3"<<endl;
	 break;
	}
	i--;
  }
}
