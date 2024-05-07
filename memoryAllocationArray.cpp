#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size"<<endl;
    cin>>size;
    int*ptr;
    ptr=new int[size];
    for(int i=0;i<size;i++){
        cout<<"Enter the element:"<<endl;
        cin>>ptr[i];

    }
    cout<<"Element that you have entered"<<endl;
    for(int i=0;i<size;i++){
        cout<<ptr[i]<<endl;
    }
    delete[] ptr;
}