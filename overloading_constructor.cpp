#include <iostream>
#include <string>

using namespace std;

class Human{
private:
    int age;
    string name;
public:
   Human(){
        cout << "default constructor"<<endl;
        age = 0;
        name = "noname";
    }

    Human(string iname){
        cout << "constructor with name as the parameter"<<endl;
        age = 0;
        name = iname;
    }
    Human(int iage){
        cout << "constructor with age as the parameter"<<endl;
        age = iage;
        name = "noname";
    }
    Human(string iname,int iage){
        cout << "constructor with age and name as the parameter"<<endl;
        age = iage;
        name = iname;
    }
    void display(){
    cout <<name <<endl<<age<<endl;
    }


};


int main()
{
    Human raju;
    raju.display();

    Human sai("sai");
    sai.display();


    Human kunal("kunal",25);
    kunal.display();

    return 0;
}
