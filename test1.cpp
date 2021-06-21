#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>


#include <iomanip>
#include <algorithm>

using namespace std;
void read_data()
{
  ifstream ip("employdetails.csv");

  if(!ip.is_open()) std::cout << "ERROR: File Open" << '\n';

  string firstname;
  string lastname;
  string email;string role;
  string age;
  string DOB;

  while(ip.good()){

    getline(ip,firstname,',');
    getline(ip,lastname,',');
    getline(ip,email,',');
    getline(ip,role,',');
    getline(ip,age,',');
    getline(ip,DOB,'\n');

    std::cout << "Name: "<<firstname<< " "<<lastname << '\n';
    std::cout << "Age: "<<age << '\n';
    std::cout << "DOB: "<<DOB << '\n';
    std::cout << "role: "<<role << '\n';
    std::cout << "email: "<<email << '\n';
    std::cout << "-------------------" << '\n';
  }

  ip.close();
  }
void sort()
{
vector<vector<string>> heatLevels;
    ifstream in("employdetails.csv");
    if(!in)
        cout << "File not found" << endl;

    string line, sector;
    while(getline(in, line))
    {
        vector<string> v;
        stringstream ss(line);
        while(getline(ss, sector, ','))
            v.push_back(sector);
        heatLevels.push_back(v);
    }

    /*for(auto &row : heatLevels)
    {
        for(auto &e : row)
            cout << e << ",";
        cout << "\n";
    }*/
auto sortproc = [](const vector<string> &a, const vector<string> & b)
    {
        int ia,ib;
        try
        {
            ia = std::stoi(a[4]);
            ib = std::stoi(b[4]);
        }
        catch(...)
        {
            cout << "invalid or out of range\n";
            return false;
        }
        return ia < ib;
    };

    std::sort(heatLevels.begin(), heatLevels.end(), sortproc);

    cout << "sorted:\n";
    read_data();
    /*for(auto &row : heatLevels)
    {
        for(auto &e : row)
            cout << e << ",";
        cout << "\n";
    }*/
}
int main(){
sort();

    return 0;
}
