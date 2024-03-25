#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>arr={1,9,2,3,4,4,4,4};
    int count=0;
    int ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]==arr[j]){
                count++;
                ans=arr[j];
            }
        }
    }
    if(count>arr.size()){
        cout<<"Majority Element="<<ans;
    }
    else{
        cout<<"No";
    }
}