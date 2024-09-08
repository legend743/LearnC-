#include <iostream>
#include <fstream>
#include "json.hpp" 
using namespace std;
int main() {
    ifstream inputFile("JsonDataFile.json");  
    if (!inputFile.is_open()) {
        cerr << "Could not open the file" <<endl;
        return 1;
    }

    nlohmann::json JsonData;  
    inputFile >> JsonData;    
    inputFile.close();

    
    cout << "File Data\n" << JsonData.dump(4) << std::endl;

    return 0;
}
