#include <iostream>

using namespace std;

class Human{
public:
    Human(){
    cout << "constructer called"<<endl;
    }

    ~Human(){
        cout << "destructer called"<<endl;
    }

};


int main()
{
    Human *chirayu;
    chirayu = new Human();
    delete chirayu;
    return 0;
}
