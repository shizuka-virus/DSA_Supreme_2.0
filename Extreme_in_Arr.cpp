#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int st=0;
    int ed=4;
    for(int i=0;i<5;i++){
        cout<<arr[st]<<",";
        cout<<arr[ed]<<",";
        st++;
        ed--;
        if(st>ed){
            break;
        }
    }
}