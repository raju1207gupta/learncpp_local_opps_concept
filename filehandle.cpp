#include <fstream>
#include <iostream>
using namespace std;

int main () {
   char data[100];
   char data1[100];

   // open a file in write mode.
   ofstream outfile;
   outfile.open(L"C:\Users\Raju\Desktop\myfolder\raj.txt");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: ";
   cin.getline(data, 100);

   // write inputted data into the file.
   outfile << data << endl;


   cout << "Enter your age: ";
   cin >> data;
   cin.ignore();

   // again write inputted data into the file.
   outfile << data << endl;

   // close the opened file.
   outfile.close();

   // open a file in read mode.
   ifstream infile;
   infile.open(L"C:\Users\Raju\Desktop\myfolder\raj.txt");

   cout << "Reading from the file" << endl;
   infile >> data1;

   // write the data at the screen.
   cout << data1 << endl;

 // infile >> data;
  // cout << data << endl;  // again read the data from the file and display it.


   // close the opened file.
   infile.close();

   return 0;
}
