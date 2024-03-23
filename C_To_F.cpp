#include<iostream>
using namespace std;
float Temperature(int n){
    return (n*9/5.0)+32;
}
int main(){
    int temp;
    cout<<"Enter the temperature in C=";
    cin>>temp;
    cout<<"The temperature in F="<<Temperature(temp);
}