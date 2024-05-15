#include<iostream>
using namespace std;
class xyz{
    private:
    int a;
    int b;
    public:
    void getdata();
    void putdata();
};
void xyz::getdata(){
    cout<<"Enter a &"<< "b"<<endl;
    cin>>a>>b;
}
void xyz::putdata(){
    cout<<"a:"<<a<<"\tb:"<<b;
    
}
int main(){
    xyz a[5];
    for(int i=0;i<5;i++){
        a[i].getdata();
    }
    for(int i=0;i<5;i++){
        a[i].putdata();

    }

    return 0;
}