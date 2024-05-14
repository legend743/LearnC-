#include <iostream>
#include <iomanip> // Required for setw
using namespace std;

int main() {
    cout << setw(10) << "Name" << setw(10) << "Age" << endl;
    cout << setw(10) << "John" << setw(10) << 25 << endl;
    cout << setw(10) << "Alice" << setw(10) << 30 << endl;

    return 0;
}
