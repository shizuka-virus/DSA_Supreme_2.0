#include<iostream>
using namespace std;
int count(int a){
    int count=0;
    while(a){
        count=count+a &1;
        a=a>>1;
    }
    return count;
}
int main(){
    int num;
    cout<<"Enter the number";
    cin>>num;
    cout<<count(num);


}