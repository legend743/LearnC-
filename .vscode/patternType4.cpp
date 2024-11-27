#include<iostream>

int main(){
    std::cout<<"Enter rows:";
    int n;
    std::cin>>n;
    for(int i=0;i<(n/2)+1;i++){
        for(int j=0;j<=(n-2*i);j++){
            std::cout<<"*";

        }
        std::cout<<std::endl;


        for(int k=0;k<=i;k++){
            std::cout<<" ";
        }
        


    }
}