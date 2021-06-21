
#include <iostream>

using namespace std;

struct student{
    int rollno;
    char sex;
}anil,rashmith;

int main()
{
    student rahul,ajay = {1111,'m'};

    rahul.rollno = 2222;
    rahul.sex = 'm';

    anil.rollno = 88888888;
    anil.sex = 'm';

    rashmith.rollno = 2222;
    rashmith.sex = 'm';

    cout << anil.rollno << endl << anil.sex <<endl;
    return 0;
}
