#include <iostream>
using namespace std;

class employee
{
 private:
  char name[30];
  float age;
 public:
  void getdata(void);
  void putdata(void);
};

void employee :: getdata(void)
{
 cout<<"Enter name: ";
 cin>>name;
 cout<<"Enter age:- ";
 cin>>age;
}

void employee ::putdata(void)
{
 cout<<"Name: "<<name<<"\n";
 cout<<"Age: "<<age<<"\n";
}


int main()
{
 int size;
 cout<<"Enter the total number of manager ";   cin>>size;
 employee manager[size];
 for(int i=0; i<size;i++)
 {
  cout<<"\n Details of manager "<<i+1<<endl;
  manager[i].getdata();
 }
 cout<<"\n";
 for(int i=0;i<size;i++)
 {
  cout<<"\n Manager "<<i+1<<endl;
  manager[i].putdata();
 }
return 0;
}
