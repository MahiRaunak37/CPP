//Creating files with constructor function
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
 ofstream outf("ITEM");			//connect ITEM file to outf(outf is object of ofstream)

 cout<<"Enter item name:- ";
 char name[30];
 cin>>name;				//get name from keyword and write to file ITEM

 outf<<name<<"\n";

 cout<<"Enter item cost: ";
 float cost;
 cin>>cost;				//get cost from keyboard and write to file ITEM
 outf<<cost<<"\n";
 outf.close();				//Disconnect ITEM file from outf

 ifstream inf("ITEM");			//connect ITEM to inf(inf is object of instream)

 inf>>name;					//read the name from file ITEM
 inf>>cost;					//read Cost from item
 cout<<"\n"<<"item name:- "<<name<<endl;
 cout<<end;<<"Item cost:- "<<cost<<endl;
 inf.close();
 return 0;
}
