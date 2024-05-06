#include<iostream>
using namespace std;
int main(){
    int arr[7]={10,44,55,21,43,54,11};
    int sum=0;
    int total;
    for(int i;i<7;i++){

        sum=sum+arr[i];

    }
    cout<<"total sum:"<<sum;
    cout<<"print size of array:"<<sizeof(arr)/sizeof(arr[0]);
}