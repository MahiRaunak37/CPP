//Two Generic data types in a class definition
#include <iostream>
using namespace std;

template <class t1, class t2>
class Test
{
 t1 a;	t2 b;
 public:
  Test(t1 x, t2 y)
   {
    a = x;	b = y;
   }

  void show()
  {
   cout<<a<<"and "<<b<<"\n";
  }
};

int main()
{
 Test <float, int> test1(1.23,123);
 Test <int,char> test2 (100,'W');
 test1.show();	test2.show();
 return 0;
}
