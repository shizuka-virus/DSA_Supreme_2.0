#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,0,0,1,0};
    int count0=0;
    int count1=0;
    for(int i=0;i<5;i++){
        if(arr[i]==1){
            count1++;
        }
        else if(arr[i]==0){
            count0++;
        }
    }
    cout<<"Number of 1s="<<count1<<endl;
    cout<<"Number of 0s="<<count0;
}