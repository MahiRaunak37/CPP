/*
			************ Assignment 2****************
			Name:- Ashish Ranjan
			Enrollment no.:-CUSB2002312009
			Sub:- OOPs with CPPs
 Write a program to add two time objects (in the form hh:mm).
*/
#include <iostream>
using namespace std;

class Time
{
 private:
  int hours;
  int minutes;
  int seconds;
 public:
  void input();
  void display();
  void sum(Time &,Time &);
};

void Time :: input()
{
 cout<<"\nEnter the value of hours:-  ";
 cin>>hours;
 cout<<"\n Enter the value of minutes:-  ";
 cin>>minutes;
 cout<<"\nEnter the value of  Seconds:-  ";
 cin>>seconds;
 }


void Time::display()
{
 cout<<"[ "<<hours<<":"<<minutes<<":"<<seconds<<" ] \n";
}
 


void Time::sum(Time &t1,Time &t2)
{
        seconds=t1.seconds+t2.seconds;
        minutes=seconds/60;
        seconds=seconds%60;
        minutes=minutes+t1.minutes+t2.minutes;
        hours=minutes/60;
        minutes=minutes%60;
        hours=hours+t1.hours+t2.hours;
}

int main()
{
        Time t1,t2,t3;
        cout<<"\nEnter 1st time Details :: \n";
        t1.input();
        cout<<"\nEnter 2nd time Details :: \n";
        t2.input();
        cout<<"\nThe 1st time entered is :: ";
        t1.display();
        cout<<"\nThe 2nd time entered is :: ";
        t2.display();
        t3.sum(t1,t2);
        cout<<"\nThe Sum of two times are :: ";
        t3.display();
        return 0;
}
