#include<iostream>
using namespace std;
class oddEven{
    private:
    int a;
    public:
    void getVal();
    void checkOddEven();
};
void oddEven:: getVal(){
    cout<<"Enter the number\n";
    cin>>a;
};
void oddEven :: checkOddEven(){
    if(a%2==0)
    cout<<"even";
    else
    cout<<"odd";

}
int main(){
    oddEven oe;
    oe.getVal();
    oe.checkOddEven();
    return 0;
    
}