#include<iostream>
using namespace std;

class funcOverride{
    public:
    void func(){
        cout<<"Hello brother"<<endl;
}
};
class child : public funcOverride{
    public:
void func(){
    cout<<"hi sister";
}
};
int main(){
    child obj;
    obj.func();
    return 0;
}