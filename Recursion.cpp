#include<iostream>

int fact(int a){
    if(a==1){
        return 1;
    }
    return a*fact(a-1);
}
int sumOfN(int s){
    if(s==0){
        return 0;
    }
    return s+sumOfN(s-1);
}
int sumOfDigits(int num){

    //in this method you cannot give number starting with 0 like 0123,012 etc 
    //because in that case it start taking it as octal and gives unexpected result
    int sum=0;
   while(num>0){
    sum+=num%10;
    num=num/10;
   }
    return sum;


}

int main(){

    std::cout<<fact(6)<<std::endl;
    std::cout<<sumOfN(4)<<std::endl;
    std::cout<<143/10<<std::endl;
   std::cout<<"sum of digits are:"<<sumOfDigits(023);

}