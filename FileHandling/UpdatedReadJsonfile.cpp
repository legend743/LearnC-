#include <iostream>
#include <fstream>
#include "json.hpp"

using namespace std;
using json = nlohmann::json;

void printJson(const json& j, const string& prefix = "Parameter") {
    for (auto it = j.begin(); it != j.end(); ++it) {
        int index = distance(j.begin(), it) + 1; 
        cout << prefix << " " << index << " : name \"" << it.key() << "\" - value \"" << it.value() << "\"" << endl;

        if (it->is_object() || it->is_array()) {
            printJson(*it, prefix + " " + to_string(index));
        }
    }
}

int main() {
    ifstream inputFile("JsonDataFile.json");  
    if (!inputFile.is_open()) {
        cerr << "Could not open the file" << endl;
        return 1;
    }

    json JsonData;  
    inputFile >> JsonData;    
    inputFile.close();

    cout << "File Data\n" << JsonData.dump(4) << endl;

    printJson(JsonData);

    return 0;
}
