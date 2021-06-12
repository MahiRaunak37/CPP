//Two Dimension array 
#include <iostream>
using namespace std;
int main()
{
 int rows,cols,i,j;
 int arr[10][10];
 cout<<"\n Enter the No. of row:- ";
 cin>>rows;
 cout<<"\n Enter the no. of columns:- ";
 cin>>cols;
 for(i=0;i<rows;i++)
 {
  for(j=0;j<cols;j++)
  {
   cout<<"\n Enter the Value at arr["<<i<<"]["<<j<<"]:- ";
   cin>>arr[i][j];
  }
 }

 cout<<"Array is:- "<<endl;
 for(i=0;i<rows;i++)
 {
  for(j=0;j<cols;j++)
  {
   cout<<"\t"<<arr[i][j];
  }
 cout<<"\n";
 }
 return 0;
}
