#include<iostream>
using namespace std;
int main(){
    int n=10;
    for(int i=0;i<10;i++){
        cout<<n<<endl;
        n--;
    }
//for while loop
int m=10;
while(m>0){
    cout<<m<<endl;
    m--;
}

do{
    cout<<"this is do loop"<<endl;
    m--;
}while(m>0);

//for loop
for(int i=0;i<10;i++){
    cout<<"you are in while loop"<<endl;
}

}