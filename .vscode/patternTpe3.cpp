#include<iostream>
int main(){
    std::cout<<"Enter the rows: ";
    int count;
    std::cin>>count;
    //-------------------------this is for star pattern--------------
    // for (int i = 0; i < count; i++)
    // {
    //     for(int j=1;j<=i;j++){
    //         std::cout<<"*";

    //     }
    //     std::cout<<std::endl;
    // }

    // for (int k = 1; k < count; k++)
    // {
    //     for (int l = 1; l < count-k; l++)
    //     {
    //         std::cout<<"*";
    //     }
    // std::cout<<std::endl;
        
    // }

    //---------------this is for number pattern

       for (int i = 0; i < count; i++)
    {
        for(int j=1;j<=i;j++){
            std::cout<<j;

        }
        std::cout<<std::endl;
    }

    for (int k = 1; k < count; k++)
    {
        for (int l = 1; l < count-k; l++)
        {
            std::cout<<l;
        }
    std::cout<<std::endl;
        
    }
    
    

}