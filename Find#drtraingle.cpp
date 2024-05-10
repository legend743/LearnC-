#include<iostream>
using namespace std;
class Traingle{
    public:
    void thirdTraingle(int a,int b){
        int c=180;
        int d;
        d=c-(a+b);
        cout<<"Third traingle is:";
        cout<<d;
    }
};
int main(){
    int a;
    int b;
    cout<<"ENter the value of a and b"<<endl;
    cin>>a>>b;
    Traingle traingle;
    traingle.thirdTraingle(a,b);


}