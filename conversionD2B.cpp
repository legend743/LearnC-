#include<iostream>
int decimalNumner(int decNumber){
    int pow=1;
    int ans=0;
    while(decNumber>0){
        int rem=decNumber%2;
         decNumber/=2;
        ans+=(rem*pow);
        pow*=10;
    } 
return ans;

}

int BinaryToDecimal(int binNumber){
    int pow=1;
    int ans=0;
    while(binNumber>0){
    int rem =binNumber%10;
    ans+=rem*pow;
    binNumber/=10;
    pow*=2;


}
return ans;


}
int main(){
    std::cout<<decimalNumner(10)<<std::endl;
    std::cout<<BinaryToDecimal(1010);
}