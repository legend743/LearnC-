#include<iostream>
int main(){

    int n;
    std::cout<<"Enter the rows: ";
    std::cin>>n;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n;j++){
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
    

}