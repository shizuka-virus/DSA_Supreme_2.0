#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,2,3,4};
    int st=0;
    for(int i=1;i<arr.size();i++){
        swap(arr[st],arr[i]);
        st++;
    }
    for(auto f:arr){
        cout<<f<<",";
    }
}