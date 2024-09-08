#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    file.open("testfile.txt" , ios::in | ios::out | ios::app);
    if(!file.is_open()){
        cout<<"Error in opening file!!!"<<endl;
        return 1;
    }
    cout<<"File is opened succesafully!!!"<<endl;
      // cout<<"Enter the string"<<endl; 
        file<<"This is my file"<<endl;
        file.clear();
        file.seekg(0,ios::beg);
    string line;
    while(getline(file,line)){
      cout<<line<<endl;
    };


  
    
    cout<<line<<endl;
    
    file.close();
    return 0;
}