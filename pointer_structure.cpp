#include <iostream>

using namespace std;

struct student{
    int rollno;
    char sex;
};

int main()
{
    student raju;
    student *rajuptr;

    rajuptr = &raju;

    raju.rollno = 1234;
   rajuptr->sex = 'm';

    cout << rajuptr -> rollno <<endl;

    cout << raju.sex <<endl;

    return 0;
}
