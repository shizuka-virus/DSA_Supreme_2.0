#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>arr(3,vector<int>(3));
    arr={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<arr.size();i++){
        int sum=0;
        for(int j=0;j<arr[i].size();j++){
            sum+=arr[j][i];
        }
        cout<<sum<<endl;
    }
}