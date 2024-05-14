#include<iostream>
using  namespace std;
int main(){
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    //dynamically allocation of memory
    int *arr=new int[size];

    cout<<"Enter\t" <<size<<"\t elements "<<endl;
    for(int i;i<size;++i){
        cin>>arr[i];
    }

    //print the element of array
    cout<<"Element are"<<endl;
    for(int i;i<=size;++i){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    return 0;

    
}