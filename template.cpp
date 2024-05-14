#include<iostream>
using namespace std;
template <class T>
void greet(T greeting){
    cout<<greeting<<endl;

}
template <class y, class z>
y product(y a,z b){
    return a*b;
}

int main(){
    int arr[3]={101, 2, 4};
    greet("Good moring");
    greet(1);
    greet(12);
    greet(arr[0]);
    cout<<product(19.3,11.90);
}
