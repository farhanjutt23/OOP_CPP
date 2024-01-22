// passing peramerters 
#include<iostream>
using namespace std;
class stu {
	private:
		int x;
		int y;
	public:
	 stu (int a ,int b )
	 {
	 	x=a;
	 	y=b;
	 } 
	 void show ()
	 {
	 	cout<<x<<y;
	 	
	 }
};
main()
{
	stu ob(3,88);
	ob.show();
}