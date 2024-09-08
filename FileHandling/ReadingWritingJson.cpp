#include<iostream>
#include<fstream>
#include "json.hpp"
using namespace std;


// void printJson(const json&j || const string & prefix="parameter"){

// }

int main(){
    ifstream Jsonfile;
    Jsonfile.open("Asheish_Sir_details.json",ios::in | ios::out  | ios::app);
    if(!Jsonfile.is_open()){
        cout<<"Unable to load file!!!!"<<endl;
    }
    cout<<"File opened"<<endl;
    nlohmann::json DataJson;
    Jsonfile>>DataJson;

  
    Jsonfile.close();
    cout<<"File Data"<<DataJson.dump(4)<<endl;\


    DataJson["Designation"]="Director";
    DataJson["Company"]="Mannash Pvt Ltd";

 ofstream outputFile;
 outputFile .open("Asheish_Sir_details.json",ios::in | ios::out);
 if(!outputFile.is_open()){
    cout<<"Unable to open file";
 }
  outputFile.seekp(outputFile.eof());
outputFile<<DataJson.dump(4);
cout<<"Modified file"<<endl;
Jsonfile.close();


}