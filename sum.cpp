#include<iostream>
using namespace std;
class sum{
	private:
	int x;
	int y;
	public:
	void value()
	{
		x=5;
		y=10;
	}
	void show()
	{
		cout<<"the sum of the any two number "<<x+y;
	}
	
};
int main()
{
	sum number;
	number.value();
	number.show();
	
	return 0;
}