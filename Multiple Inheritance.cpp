#include <iostream>
#include <string>

using namespace std;

class Father{
public:
    int height;
    void askFather(){
    cout <<"am your father ask me what u want"<<endl;
    }
};

class Mother{
public:
    string skincolor;
    void askMother(){
    cout <<"am your mother ask me what u want"<<endl;
    }
};

class Child : public Father, public Mother{
public:
    void askParents(){
    cout <<"am asking my parents"<<endl;
    }
    void setColorandHeight(string icolor,int iheight){
    skincolor = icolor;
    height = iheight;
    }
    void display(){
    cout <<"height is "<<height<<" and color is "<<skincolor<<endl;
    }

};

int main()
{
Child raju;
raju.setColorandHeight("white",6);
raju.display();
raju.askFather();
raju.askMother();
return 0;
}
