#include<iostream>
using namespace std;
bool prime(int n){
    if(n==0||n==1){
        return false;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    
}
int main(){
    int num;
    cout<<"Enter the number=";
    cin>>num;
    if(prime(num)){
        cout<<"The number is Prime.";
    }
    else{
        cout<<"The number is not Prime.";
    }
}