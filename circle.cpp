// the area of the circle;
#include<iostream>
using namespace std;
class circle{
	private:
	int r;
	public:
		void red()
		{
			cout<<"Enter the radius of the circle"<<endl;
			cin>>r;
		
		}
	    void area()
	    {
	    	cout<<"the area of the circle is "<<3.14*r*r<<endl;
		}
		void cir()
		{
			cout<<"the circumfirance of the circle"<<2*3.14*r<<endl;
		}
};
int main(){
	circle value;
	value.red();
	value.area();
	value.cir();
	return 0;
}