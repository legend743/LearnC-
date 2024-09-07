#include<iostream>
#include<fstream>
using namespace std;
int main(){
ifstream ifn;
ifn.open("newfile.txt");
char c;
c=ifn.get();
while (!ifn.eof())
{cout<<c;
c=ifn.get();
    
}

ifn.close();
}