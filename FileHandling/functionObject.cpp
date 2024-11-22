#include<iostream>
#include<algorithm>
#include<functional>
int main(){

//funtions object (functor): Function wrapped in a class so that it available like an object
int arr[]={12,3,23,44,4};
// here greater is a functor or function object which makes the whole array to sort in descending order
std::sort(arr,arr+5,std::greater<int>());

for(int i=0;i<5;i++){
    std::cout<<" "<<arr[i];

}



}
