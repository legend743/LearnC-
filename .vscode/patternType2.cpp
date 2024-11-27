#include<iostream>
int main(){
int a;
std::cout<<"enter rows: ";
std::cin>>a;
//this is for start pattern
// for (int i = 0; i < a; i++){
//     for (int j = a-i; j >=1; j--)
//     {
//          std::cout<<"*";
//     }
//     std::cout<<std::endl;
    
// }

//---if you want to print number pattern than you can see this
for (int i = 0; i < a; i++){
    for (int j = 1; j <=a-i; j++)
    {
         std::cout<<j;
    }
    std::cout<<std::endl;
    
}
    
}


