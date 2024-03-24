#include<iostream>
using namespace std;
long factorial(long n){
    long f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    long num;
    cout<<"Enter the number=";
    cin>>num;
    cout<<"The factorial is="<<factorial(num);
}