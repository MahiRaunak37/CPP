//Creating files with open() function
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
 ofstream fout;					//Create ouput stream
 fout.open("country");				//connect fout file to the "Country" to it.
 fout<<"United States of America\n";
 fout<<"United Kingdom\n";
 fout<<"South Korea\n";
 fout.close();					//Disconnect "Country :

 fout.open("capital");				//Connect Capital
 fout<<"Washington\n";
 fout<<"London\n";
 fout<<"Seoul\n";
 fout.close();					//disconnect Capital

 const int N = 80;				//size of line
 char line[N];

 ifstream fin;					//create input stream and connect "Country" to it
 fin.open("country");
 cout<<"contents of country file\n";
 while(fin)
 {
  fin.getline(line,N);				//read the line 
  cout<<line;					//display the line
 }
 fin.close();					//disconnect country

 fin.open("capital");				//Connect capital
 cout<<"\n Contents of capital file\n";
 while(fin)
 {
  fin.getline(line,N);
  cout<<line;
 }
 fin.close();					//disconnect capital file
 return 0;
}
