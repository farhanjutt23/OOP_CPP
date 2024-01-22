#include<iostream>
using namespace std;
class number{
	private:
	int x;
	int y;
	public:
	number() {
		x=20;
		y=30;
		
	}
	void avg(){
		cout<<"your first number is "<<x<<endl;
		cout<<"your second number is "<<y<<endl;
		cout<<"the avg of the any two numbers "<<(x+y)/2;
	}
};
main()
{
	number r;
	r.avg();
	
}