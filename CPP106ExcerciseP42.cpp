//Write a function to read a matrix of sixe m*n from th keyboard
#include <iostream>
using namespace std;
void inputmatrix();
void displaymatrix();
int rows, cols;
int arr[100][100];


int main()
{
 cout<<"Enter the rows of Matrix:- ";
 cin>>rows;
 cout<<"Enter the columns of Matrix:- ";
 cin>>cols;
 inputmatrix();
 displaymatrix();
 return 0;
}

void inputmatrix()
{
 for(int i=0;i<rows;i++)
  for(int j=0;j<cols;j++)
   {
	cout<<"Enter the Element at arr["<<i<<"]["<<j<<"]:- ";
	cin>>arr[i][j];
   }
}

void displaymatrix()
{
 int sum =0;
 cout<<"Rows:- "<<rows<<"cols:- "<<cols<<endl<<"Matrix:- "<<endl;
 for(int i=0;i<rows;i++)
 {
  for(int j=0;j<cols;j++)
   {
	cout<<arr[i][j]<<"\t";
	sum = sum +arr[i][j];
   }
  cout<<"\n";
 }
 cout<<"Sum of all digits:- "<<sum<<endl;
}

