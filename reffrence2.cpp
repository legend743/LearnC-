#include<iostream>
using namespace std;
int n;
int& club(){
    return n;


}
int main(){
    club()=75;
    cout<<n;
    return 0;
}