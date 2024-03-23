#include<iostream>
using namespace std;
int main(){
    int num;
    int a;
    int bits=0;
    cin>>num;
    while(num){
          a=num%2;
          num=num/2;
          bits=(10*bits)+a;
    }
    cout<<bits;
}