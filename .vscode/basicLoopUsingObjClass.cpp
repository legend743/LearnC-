#include<iostream>
using namespace std;
class loop_basic{
    private:
    int a;
    public:
    
    void printNmReverse();
};
void loop_basic::printNmReverse(){
    cout<<"Enter the number"<<endl;
    cin>>a;
    int i=0;
    cout<<"Reverse Counting"<<endl;
    for(i=a;i>=0;i--){
        cout<<""<<i<<endl;
    }
}
int main(){
    loop_basic lb;
    lb.printNmReverse();
    return 0;
}