#include<iostream>
using namespace std;
class fr{
	private:
	int x;
	int y;
	public:
	void in()
	{
		cout<<"enter the first number";
		cin>>x;
		cout<<"enter the second number";
		cin>>y;
		
	} 
	void show()
	{
		cout<<"the first number is "<<x<<endl;
		cout<<"the second number is "<<y<<endl;
		
	}
};
 main()
 {
 	fr t;
 	t.in();
 	t.show();
 	  
 }