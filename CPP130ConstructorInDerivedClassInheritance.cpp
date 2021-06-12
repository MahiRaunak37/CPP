//Constructor in derive class
#include <iostream>
using namespace std;

class alpha				//alpha class
{
 int x;
 public:
	alpha(int i)				//constructor of alpha class
	{
	 x = 1;
	 cout<<"alpha initialized "<<endl;
	}

	void show_x(void)			//show_x function inside the alpha class
	{
	 cout<<"x = "<<x << endl;
	}
};

class beta				//beta class
{
 float y;
 public:
	beta(float j)				//constructor of beta class
	{
	 y=j;
	 cout<<"Beta initialized"<<endl;
 	}

	void show_y(void)			//show_y class inside the beta class
	{
	 cout<<"y = "<<y<<endl;
	}
};

class gamma : public beta, public alpha		//class gamma is inherited by class beta and alpha publicly
{
 int m,n;
 public:
	gamma(int a, float b, int c, int d): alpha(a), beta(b)		//construnctor of gamma function
	{								//inserit the class alpha nd beta
	 m =c; n= d; cout<<"gamma initialized "<<endl;
	}

	void show_mn(void)
 	{
	 cout<<"m = "<<m<<endl<<"n = "<<n<<endl;
	}
};

int main()					//main function
{
 gamma g(5, 10.75,20, 30);					//creating the object of hte gamma class
 cout<<endl;							//but gamma() is constructor so it is use as
 g.show_x();	g.show_y();	g.show_mn();			//function
 return 0;
}

