#include <iostream>
using namespace std;
  
class testconstructor
{
private:
    testconstructor()
     {
       cout <<"constructor of testconstructor(private part of class testconstructor)\n";
     }
    friend class friendclass;
};
class friendclass
{
public:
    friendclass(){
        testconstructor a1;
        cout << "constructor of friendclass (public part of class friendclass) \n";
    }
};
  
int main(){
    friendclass b1;
    return 0;
}
