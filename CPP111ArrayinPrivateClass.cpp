//Processing shopping list

#include <iostream>
using namespace std;

const int m=50;				//declare constant type variable 

class items
{

private:				//inside the private member
 int itemCode[m];
 float itemPrice[m];
 int count;

public:					//inside the public member
 void CNT(void) {  count=0; }
 void getitem(void);
 void displaySum(void);
 void remove(void);
 void displayItems(void);
};


//Accessing the private members using the public function
void items::getitem(void)
{
 cout<<"Enter item code: ";
 cin>>itemCode[count];

 cout<<"Enter item cost:- ";
 cin>>itemPrice[count];
 count++;
}

//Accessing the public member using the public function
void items::displaySum(void)
{
 float sum = 0;
 for(int i=0; i<count; i++)
 	sum = sum+itemPrice[i];
 cout<<"\n Total value: "<<sum<<endl; 
}


//Accessing the public member using :: insid the items class
void items :: remove(void)
{
 int a;
 cout<<"Enter item code: ";
 cin>>a;
 for(int i=0; i<count;i++)
	if(itemCode[i] ==a)
	 itemPrice[i]=0;
}

//Accessing the public member using :: inside the items class
void items :: displayItems(void)
{
 cout<<"\n Code Price \n";
 for(int i=0;i<count;i++)
 {
  cout<<"\n"<<itemCode[i]<<"\t"<<itemPrice[i];
 }
cout<<"\n";
}

//main function
int main()
{
 items order;
 order.CNT();
 int x;

 do
 {
	cout<<"\n YOu can do the following\n";
	cout<<"\n 1.Add an items \t2. Display total value \n3. Delete an item \t 4. Display all items \n5. Quit "<<endl;
	cin>>x;

	switch(x)
	{
	 case 1:
		order.getitem(); 
		break;
	 case 2:
		order.displaySum(); 
		break;
	 case 3:
		order.remove(); 
		break;
	 case 4:
		order.displayItems();
		 break;
	 case 5:
		break;
	 default:
		cout<<"Invalid input"<<endl;
	}
  }
   while(x!=5);
}














