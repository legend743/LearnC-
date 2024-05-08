#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> n;
    n.assign(9,1);

    cout<<"the contents are:"<<endl;
    for(int i=0;i<n.size();i++){
        cout<<n[i]<<" "<<endl;
    }
    n.push_back(2);
    int no=n.size();
    cout<<"Size become"<<no<<endl;

}