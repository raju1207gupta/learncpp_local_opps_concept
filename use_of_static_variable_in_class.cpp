#include <iostream>

using namespace std;

class Human{
public:
    static int human_count;

    Human(){
    human_count++;
    }

    void humanTotal(){
    cout << "There are "<<human_count<<" peoples are in this program" <<endl;
    }

    static void humanCount(){
     cout << "There are "<<human_count<<" peoples are in this program " <<endl;
    }

};

int Human::human_count = 0;
int main()
{
cout << Human::human_count<<endl;

Human anil;
Human anjali;
Human rashith;
Human sandeep;
Human ::humanCount();
cout << Human::human_count<<endl;

    return 0;
}
