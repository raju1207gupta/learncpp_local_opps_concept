#include <iostream>
#include<string>
using namespace std;

class Person{
private:
    string name;
    int age;
    void setName(string iname){name = iname;}
    void setAge(int iage){age = iage;}

};

class Student : public Person{
public:
    int id;
    void setId(int iid){id = iid;}

    void introduce(){
    cout <<"hi iam "<<name<<" and i am "<<age<<" years old "<<endl<<"and my student id is "<<id;

    }

};

int main()
{
    Student raju;
    raju.setName("raju");
    raju.setAge(22);
    raju.setId(12345);

    raju.introduce();
    return 0;
}
