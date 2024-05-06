#include<iostream>
using namespace std;
int main(){
    int n=10;
    for(int i=1;i<=n;i++){
        cout<<i<<endl;
        if(i==4){
            break;
        }
}
//continue statement
for(int j=1;j<=n;j++){
  
    if(j==5){
        continue;
    }
      cout<<j;
}

}