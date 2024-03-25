#include<iostream>
using namespace std;
int main(){
    int a,num=0;
    cout<<"Enter 4 digits to make integer."<<endl;
    for(int i=1;i<=4;i++){
        cout<<" Enter the No "<<i<<" Digit=";
        cin>>a;
        num=(num*10)+a;
        }
    cout<<"The number is="<<num;    
}