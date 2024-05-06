#include<iostream>
using namespace std;
int main(){
    int arr[4][3]={{11,33,9},{33,88,5},{77,76,75}};
    for(int i;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
    }
    cout<<" "<<endl;
    }
    return 0;
}