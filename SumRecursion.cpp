#include<iostream>
using namespace std;
int Sum(int num)
{
    if(num!=0){
        return num+Sum(num-1);
    }
    return 0;
}
int main(){
    int num;
    cout<<"Enter the number:"<<endl;

    cin>>num;

    cout<<"Sum of numbers is"<<Sum(num);
    return 0;

}