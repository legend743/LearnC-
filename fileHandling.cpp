#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream os;
    os.open("newfile.txt");
    os<<"this ismy first file";
    os.close();


}