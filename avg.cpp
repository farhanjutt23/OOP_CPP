//IN this funaction i will find the numbers of the class in which i will do the sum and avg
#include<iostream>
using namespace std;
class data{
	private:
	int x;
	int y;
	int z;
	public:
		void in(){
			cout<<"Enter the first number"<<endl;
			cin>>x;
			cout<<"Enter the second number"<<endl;
			cin>>y;
			cout<<"Enter the third number"<<endl;
			cin>>z;
			
		}
		int sum(){
		   return x+y+z;
		}
		int avg()
		{
			return (x+y+z)/3;
		}
		
};
int main()
{
	int s;
	int a;
	data value;
	value.in();
	s=value.sum();
	a=value.avg();
	cout<<"the sum of the numbers"<<s<<endl;
	cout<<"the avg of the numbers"<<a<<endl;
	return 0;
}



