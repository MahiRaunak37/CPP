// Reading Strings with getline() in cpp
#include <iostream>
using namespace std;

int main()
{
 int size =20;
 char city[20];

 cout<<"Enter city name:- ";
 cin>>city;
 cout<<"City name(cin):- "<<city<<endl;
 getchar();
 cout<<"Enter city name again:- ";
 cin.getline(city,size);
 cout<<"City name(getline):- "<<city<<endl;
 return 0;
}
