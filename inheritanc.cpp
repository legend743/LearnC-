#include<iostream>
using namespace std;
class Tarrif{
    int coupon;
    public:
    void setCoupon(int a){
        coupon=a;
    }
    int getCoupon(){
        return coupon;
    }
};
int main(){
    Tarrif c;
    c.setCoupon(50);
    cout<<c.getCoupon();
}