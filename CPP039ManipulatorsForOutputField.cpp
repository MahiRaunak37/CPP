//Manipulators for outputs in field
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
 cout<<'|'<<setw(8)<<'X'<<'|'<<endl;
 cout<<fixed<<setprecision(2)<<setw(10)<<123.4<<endl<<"1234567890"<<endl;
 return 0;
}
