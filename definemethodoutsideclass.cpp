#include <iostream>
#include <string>

using namespace std;

class Human{
public:
    string name = "raju" ;
    void introduce();

};

void Human :: introduce(){

    cout << Human ::name <<endl;

}

int main()
{
    Human raju;

    raju.introduce();
    return 0;
}
