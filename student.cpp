// the class in which show the name id age and cell number
#include<iostream>
using namespace std;
class student{
	private:
		string name;
		string father_name;
		int age;
		int id;
		int cell;
	public:
		void in()
		{
			name="Farhan";
			father_name="Shafiq";
			age=20;
			id=7766;
			cell=7554223;
			
			
		}
		void show()
		{
			cout<<" The name of the student is: "<<name<<endl;
			cout<<"The name of the student fathers"<<father_name<<endl;
	        cout<<"The age of the student is "<<age<<endl;
	        cout<<"The id of the user"<<id<<endl;
	        cout<<"The cell of the student"<<cell;
		}
};

int main()
{
	student data;
	data.in();
	data.show();
	return 0;
}


