#include <iostream>
#include <string>

using namespace std;
void studentList();
int main()
{
    studentList();
    student raju1;
    cout <<raju1.name <<endl<<raju1.age<<endl;

     return 0;
}

void studentList(){
class Student{
public:
    string name;
    int age;

    void display(){
    cout <<name <<endl<<age<<endl;
    }
};

Student raju;
raju.name = "raju";
raju.age = 22;
raju.display();
}
