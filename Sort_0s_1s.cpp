#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr={1,0,1,1,0,0,1};
    int st=0;
    int ed=arr.size()-1;
    int i=0;
    while(st<ed){
        if(arr[i]==0){
            swap(arr[i],arr[st]);
            i++;
            st++;
        }
        else{
            swap(arr[ed],arr[i]);
            ed--;
        }
    }
    for(auto f:arr){
        cout<<f<<",";
    }
}