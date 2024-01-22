//write a program to find the sum of the any 4 numbers and then find the avg of these nuimbers
#include<iostream>
using namespace std;
class frt{
	private:
	 int a,b,c,d;
	 public:
	void in(){
		cout<<"enter the any 3 numbers";
		cin>>a>>b>>c; 
	}
	void sum() {
		cout<<"the sum of the any 3 numbers"<<a+b+c;
		
	}
	void avg()
	{
		cout<<"the avg of the any 3 numbers"<<(a+b+c)/3;
	}
};
main()
{
	frt t;
	t.in();
	t.sum();
	t.avg();