#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[3]={1,8,2};
    vector<int>ans;
    for(int i=0;i<5;i++){
        int element=arr[i];
        for(int j=0;j<3;j++){
            if(element==brr[j]){
                ans.push_back(arr[i]);
            }
        }
    }
    for(auto f: ans){
        cout<<f<<",";
    }
}