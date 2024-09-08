#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("study_material.txt", ios::in | ios ::out | ios::trunc);
    if (!file.is_open())
    {
        cout << "Could not load file!!!";
        return 1;
    }

    cout << "file open successfully!!" << endl;
    // cout << "Write something to ssave!!!!!!<<endl";

        string line;
        std::getline(cin,line);
        file<<line<<endl;
        file.close();
 
    return 1;
}
