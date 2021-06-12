//Using class string
#include <iostream>	//header file
#include <string>
using namespace std;
int main()
{
 string prompt("What is your name:- "),name,line(40,'-'),total = "hello";	//string variables
 cout<<prompt;			//prompt as "what is your name
 getline(cin,name);		//input in name by cin stream using getline
 //cin>>name;			//direct stream input
 total= total+name;		//total = hello + Name (input) {concatenates and assigns strings}
 cout<<line<<endl<<total<<endl;	//print line then total 
 cout<<"your name is "<<name.length()<<"characters long!"<<endl;	//print length using name.length()
 cout<<line<<endl;		//print line
 return 0;			//return to the main function
}

/*
line(40,'-')
cout<<line;
Here line with 40 --------------------------------------
*/
