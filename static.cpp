// static data member
#include<iostream>
using namespace std;
class stu{
	private:
	int x;
	int y;
	static int f;
	public:
	void getdata()
	{
		x=30;
		y=50;
		f++;
		
	}
	void showdata()
	{
		cout<<"x ="<<x<<"y ="<<y<<"f="<<f<<endl;
		
	}
	
};
int stu ::f=0;
main()
{
	stu number, value;
	number.getdata();
	number.showdata();
	value.getdata();
	value.showdata();
	
}