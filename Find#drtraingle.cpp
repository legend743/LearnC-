#include<iostream>
using namespace std;
class Traingle{
    public:
    void thirdTraingle(int a,int b){
        int c=180;
        int d;
        d=c-(a+b);
        cout<<"Third traingle is:";
        cout<<d<<endl;

    };
    void areaScaleneTraingle(int s,int a,int b,int c){
        
        int area;
        area=(s*(s-a)*(s-b)*(s-c))^(-1/2);
        cout<<"area of scalane traingle"<<endl;
        cout<<area<<endl;

    }
};
int main(){
    int a;
    int b;
    cout<<"ENter the value of a and b"<<endl;
    cin>>a>>b;
    Traingle traingle;
    traingle.thirdTraingle(a,b);
    traingle.areaScaleneTraingle(12,8,3,4);


}