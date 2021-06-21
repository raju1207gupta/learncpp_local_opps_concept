#include <iostream>
#include <string>

using namespace std;

class Human{
private:
    string *name;
    int *age;
public:
    Human(string iname, int iage){
        name = new string;
        age = new int;

        *name = iname;
        *age = iage;
    }

    void display(){
    cout << "Hi i am "<<*name<<" and i am "<<*age<<" years old"<<endl;
    }

    ~Human(){
    delete name;
    delete age;
    cout << "all memories are released"<<endl;
    }


};

int main()
{
    Human *raju = new Human("raju",24);
    raju->display();
    delete raju;

    return 0;
}
