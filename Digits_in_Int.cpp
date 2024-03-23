#include<iostream>
using namespace std;
int main(){
    int num,a;
    cout<<"Enter the  number=";
    cin>>num;
    while(num>0){
        a=num%10;
        num=num/10;
        cout<<a<<",";

    }
}