// define the member funcation outside of the class
#include<iostream>
using namespace std;
class fet{
	private:
	int x;
	int y;
	public:
	void in();
	void show();
	
};
    void fet::in(){
       x=20;
       y=30;
    	
	}
	void fet::show(){
		cout<<"the first number is the "<<x<<endl;
		cout<<"the second number is the"<<y<<endl;
			}
main(){
	fet t;
	t.in();
	t.show();
}