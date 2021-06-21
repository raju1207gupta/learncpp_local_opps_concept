#include <iostream>
#include<string>

using namespace std;

struct address{
    int house_no;
    string street_name;
};

struct student{
    string name;
    int rollno;
    address *addr;
};

int main()
{
student raju;
student *rajuptr;

rajuptr = &raju;

rajuptr->name = "raju";
rajuptr->rollno = 1245;

address adr = {65,"jamshedpur"};

rajuptr->addr = &adr;

cout << rajuptr->name << endl;
cout << rajuptr->rollno << endl;

cout << rajuptr->addr->house_no << endl;
cout << rajuptr->addr->street_name << endl;

    return 0;
}

