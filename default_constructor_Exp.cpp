#include <iostream>
#include <string>

using namespace std;

class Human{
private:
        string name;
        int age;

public:
    Human(){
        name = "Raju Gupta";
        age = 0;
        cout << "Default constructor is called when u create an object of human"<<endl;
    }

    void display(){
    cout <<name<<endl<<age<<endl;
    }

};

int main()
{
    Human raju;
    raju.display();

    return 0;
}
