#include <iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cout << "Enter the String: "<<endl;
    getline(cin, s); // This line reads the input string from the user

    cout << "You have entered: " << s<<endl;

     s.push_back('p');
     cout<<"After pushing the value:"<<s<<endl;
     s.pop_back();
     cout<<"After poping the value:"<<s<<endl;

    return 0;
}
