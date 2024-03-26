#include<iostream>
using namespace std;
int bit(int n,int key){
    int mask=1<<key;
    int ans=n|key;
    return ans;
}
int main(){
    int num,k;
    cout<<"Enter the number=";
    cin>>num;
    cout<<"Enter the key to shift=";
    cin>>k;
    int c=bit(num,k);
    cout<<"The number now become="<<c;
}