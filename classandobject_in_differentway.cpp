#include <iostream>
#include <string>

using namespace std;
class Human{
public:
    string name;
    void introduce(){
        cout << "hi "<<name<<endl;;
    }
};
int main()
{
    Human raju;

    Human *gokul = new Human();

    raju.name = "raju";
    raju.introduce();

    gokul->name = "gokul";
    gokul->introduce();

    return 0;
}
