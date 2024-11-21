#include<iostream>
#include<fstream>

class Details{
    public:
    std::string name;
    
    void addMember(){

        
        std::cin>>name;

    }


};
int main(){
    Details dd[5];
     std::ofstream file("Details.txt");
        for(int i=0;i<5;i++){

            std::cout<<"Enter the name : ";
            dd[i].addMember();

            file<<dd[i].name<<std::endl;
        }
        file.close();


    return 0;
}