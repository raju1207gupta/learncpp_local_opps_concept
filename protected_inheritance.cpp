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

class Student : protected Person{
public:
    void display(){
    cout << name<<endl;
    }
    void setStudentName(string iname){
    setName(iname);
    }
};


int main()
{
Student chirayu;
chirayu.setStudentName("chirayu");
chirayu.display();
return 0;
}
