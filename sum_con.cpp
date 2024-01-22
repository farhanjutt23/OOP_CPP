#include<iostream>
using namespace std;
class stu{
	private:
	int x;
	int y;
	public:
	stu()
	{
		x=10;
		y=30;
		
	}
	void sum()
	{
		cout<<"the sum of the any two numbers"<<x+y<<endl;
		
	}
	
};
main()
{
	stu n;
	n.sum();
	
}