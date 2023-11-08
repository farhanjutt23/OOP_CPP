#include<iostream>
using namespace std;
class max
{   
    private:
    int x;
    int y;
    public:
    void ali(){
        cout<<"enter the first number"<<endl;
        cin>>x;
        cout<<"enter the second number"<<endl;
        cin>>y;
    }
    void farhan(){
        if (x>y)
        {
            cout<<"first number is greater";
        }
        else
        {
            cout<<"second number is greater";
        }
        
    }

};
int main()
{
    max value;
    value.ali();
    value.farhan();
}