#include<iostream>
using namespace std;
class Overload{
    public:
    int funcOverloading(int a,int b){
        return a+b;
    };
    int funcOverloading(int a,int b,int c){
        return a+b+c;
    }
};

int main(){
    Overload ov;
    cout<<ov.funcOverloading(1,2)<<endl;
    cout<<ov.funcOverloading(1,2,3)<<endl;
    return 0;
}