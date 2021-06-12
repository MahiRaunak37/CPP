//usign Default Data Types in a Class Definition
#include <iostream>
using namespace std;

template <class t1 = int,class t2 = int>	//default data types specified as int
class Test
{
 t1 a;	t2 b;					//tempalate variable name
 public:
 Test(t1 x,t2 y)
 {
  a =x; b= y;
 }

 void show()
 {
  cout<<a<<" and "<<b<<endl;
 }
};

int main()
{
 Test <float,int>  test1(1.23,123);
 Test <int, char> test2(100, 'W');
 Test <char, float> test3('a', 12.983);
 test1.show();
 test2.show();
 test3.show();
 return 0;
}
