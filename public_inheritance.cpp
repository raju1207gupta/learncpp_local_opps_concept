#include <iostream>
#include <string>
using namespace std;


class Person{
protected:
    string name;
public:
    void setName(string iname){
    name = iname;
    }
};

class Student : public Person{
public:
    void display(){
    cout << name <<endl;
    }

};


int main()
{
Student ayush;
ayush.setName("ayush");
ayush.display();


    return 0;
}
