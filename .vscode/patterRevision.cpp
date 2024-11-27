#include<iostream>
int main(){
    for (int i = 1; i < 5; i++){
        for(int j=i-1;j<5-2*i;j++){
            std::cout<<" ";
        }
        std::cout<<"*"<<std::endl;
    }
    

}