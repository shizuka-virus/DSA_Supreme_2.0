#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={6,2,3,7,5};
    int min=arr[0];
    int max;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    for(int i=0;i<arr.size();i++){
        if(min==arr[i]){
               max=arr[i];
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>max){
                    max=arr[j];
                }
            }
            break;
        }
    }
    int c=max-min;
    cout<<c;
}