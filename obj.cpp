#include<iostream>
using namespace std;
class frt{
	private:
	int x;
	int y;
	public:
   void show()
   {
   	 x=10;
   	 y=20;
   	 cout<<"the value of the x"<<x<<endl;
   	 cout<<"the value of the y"<<y<<endl;
   	 
	} 
};
main()
{
	frt p,t;
	p.show();
	t.show();
	
}