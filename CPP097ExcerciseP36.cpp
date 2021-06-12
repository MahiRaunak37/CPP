//Find the average of run
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  string player_name[20];
  int Runs[20], Innings[20], Times_not_out[20];
  int i,j,n;
  cout<<"\n Enter the value of n:- ";
  cin>>n;
  for(i=0;i<n;i++)
  {
 	cout<<"Enter the Player's name:- ";
	 cin>>player_name[i];
	 cout<<"Enter the runs:- ";
	 cin>>Runs[i];
	 cout<<"Enter the Innings:- ";
	 cin>>Innings[i];
	 cout<<"Enter the Times_not_out:- ";
	 cin>>Times_not_out[i];
	 cout<<i+1<<"th record insert sucessfully"<<endl;
   }

 cout<<"\n Player's name \t Runs \t Innings \t Times_not_out"<<endl;
 for(i=0;i<n;i++)
 {
	cout<<setw(10)<<player_name[i]<<setw(10)<<Runs[i]<<setw(10)<<Innings[i]<<setw(13)<<Times_not_out[i]<<endl;
 }

 return 0;
}
