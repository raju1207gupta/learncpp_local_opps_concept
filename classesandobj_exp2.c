#include <iostream>
#include <string>

using namespace std;
class HumanBeing{
public:
    string name;
    void introduce(){
        cout << "hi i am "<<name<<endl;;
    }
};
int main()
{
    HumanBeing raju;
    raju.name = "raju";
    raju.introduce();

    HumanBeing neetha;
    neetha.name = "neetha";
    neetha.introduce();

    return 0;
}
