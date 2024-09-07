#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream os;
    os.open("learningCpp.txt");
    os << "I am learning cppp";
    os.close(); 

 
    ifstream ifn;
    ifn.open("learningCpp.txt");
    if (!ifn) {
        cerr << "Error opening file!" << endl;
        return 1; 
    }

    char c;
    while (ifn.get(c)) { 
        cout << c; 
    }
    ifn.close(); 

    return 0;
}

