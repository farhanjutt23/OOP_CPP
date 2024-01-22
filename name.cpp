#include <iostream>  
using namespace std;

class Name {
private:
    string name;

public:
    void in() {
        cout << "Enter your name: " << endl;
        cin >> name;
    }

    void out() {
        cout << "The name of the user: " << name << endl;
    }
};

int main() {
    Name farhan;
    farhan.in();
    farhan.out();
    return 0;
}
