#include<iostream>
using namespace std;
int main()
{
    int *ptr;
    int arr[5]={10,30,40,50,22};
    ptr=arr;
    for(int i;i<5;i++){
        cout<<*ptr<<endl;
        ptr++;
    }
    return 0;
}