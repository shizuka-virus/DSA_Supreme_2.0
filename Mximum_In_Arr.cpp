#include<iostream>
using namespace std;
int main(){
    int arr[5]={4,2,9,3,7};
    int max=arr[1];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The max="<<max;

}