#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={2,7,6,9,1};
    int brr[3]={2,8,1};
    int sum=9;
    vector<int>ans;
    for(int i=0;i<5;i++){
        int element=arr[i];
        for(int j=0;j<3;j++){
            int element2=brr[j];
            if(element+element2==sum){
                cout<<"("<<element<<","<<element2<<")"<<" ";
            }
        }
    }
}