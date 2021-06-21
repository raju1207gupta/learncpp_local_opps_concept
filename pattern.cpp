#include <iostream>
#include<string>
#include<cstring>

using namespace std;

// Function to demonstrate printing pattern
void pypart(string st,int n)
{
    // outer loop to handle number of rows
    //  n in this case

    for (int i=(n/2); i<n; i++)
    {
        //  inner loop to handle number of columns
        //  values changing acc. to outer loop
        for(int j=0; j<=i; j++ )
        {
            // printing stars
            cout << st[j];
        }

        // ending line after each row
        cout << endl;
    }
}

// Driver Function
int main()
{

    char *st;
    cout<<"enter the word"<<endl;
    gets(st);
    int n = strlen(st);
    pypart(st,n);
    return 0;
}
