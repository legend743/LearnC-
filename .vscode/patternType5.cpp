#include<iostream>
int main(){
int n=10;
for(int i=0;i<(n/2)+1;i++){
    for(int j=0;j<n/2-i;j++){
        std::cout<<" ";
    }
     for(int k=1;k<=(2*i)+1;k++){
        std::cout<<"*";
        
    }
    
        std::cout<<std::endl;
    
   
    

}
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