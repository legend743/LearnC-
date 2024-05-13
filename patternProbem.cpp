#include<iostream>
using namespace std;
class
{
    int faisal;
};
void patternProblem(int n){
    for(int i;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
};
void rectanglepatternProblem(int n){
    for(int i;i<=n;i++){
        for(int j=i;j<=n;j++){ 
        if(j==0){
            for(int k;k<=n;k++){
            cout<<n;
            }
            cout<<endl;
        } 
        if(j>0 || j==n){
            for(int m;m<j;m++){
                 if(j==0|| j==n){

            cout<<"n";
        }else{
            cout<<" ";
        }   
            }
          
       
        }
        
    } cout<<endl;
    }
   
};
int main(){
    cout<<"Enter the  number"<<endl;
    int n;
    cin>>n;
    // patternProblem(n);
    rectanglepatternProblem(n);
    return 0;
}