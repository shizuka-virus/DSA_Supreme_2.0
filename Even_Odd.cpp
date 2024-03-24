#include<iostream>
using namespace std;
int Evenodd(int num){
    if(num%2==0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;
    cout<<"Enter the number=";
    cin>>num;
    if(Evenodd(num)){
        cout<<"The number is Even.";
    }
    else{
        cout<<"The number is Odd.";
    }
}