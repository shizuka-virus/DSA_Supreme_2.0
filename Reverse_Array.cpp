#include<iostream>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"Enter element "<<i<<" =";
        cin>>arr[i];
    }
    for(int i=9;i>=0;i--){
        cout<<arr[i]<<",";
    }
}