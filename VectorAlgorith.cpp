#include<iostream>
#include<algorithm>

using namespace std;
int main(){
    int i=7;
    int j=9;
    cout<<"before swap: "<<i<<endl;
    cout<<"before swap: "<<j<<endl;
    swap(i,j);
    cout<<"after swap: "<<i<<endl;
    cout<<"after swap: "<<j<<endl;
    return 0;
}