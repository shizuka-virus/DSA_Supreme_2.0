#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={2,4,5,6,7};
    int brr[3]={1,9,0};
    vector<int>ans;
    for(int i=0;i<5;i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<3;i++){
        ans.push_back(brr[i]);
    }
    for(auto f:ans){
        cout<<f<<",";
    }
}