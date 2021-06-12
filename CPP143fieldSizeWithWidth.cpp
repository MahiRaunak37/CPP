//Specifying Field size with width()
#include <iostream>
using namespace std;

int main()
{
 int items[4] = {10,8,12,15};				//Intialized array with value
 int cost[4] = {75,100,60,69};

 cout.width(5);						//specifing the value of column width 5
 cout<<"Items";
 cout.width(8);						//specifing the value of column width 8
 cout<<"Cost";

 cout.width(15);					//specifing the value of column width 15
 cout<<"Total value "<<endl;

 int sum =0;

 for(int i=0;i<4;i++)
 {
 cout.width(5);							//displaying the width of the column
 cout<<items[i];

 cout.width(8);
 cout<<cost[i];

 int value = items[i]*cost[i];
 cout.width(15);
 cout<<value<<"\n";
 sum = sum + value;
 }

cout<<"\n Grand Total = ";
cout.width(2);
cout<<sum<<endl;
return 0;
}
