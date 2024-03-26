#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[7]={2,4,0,7,1,3,5};
    int sum=9;
    for(int i=0;i<7;i++){
        int element=arr[i];
        for(int j=i+1;j<7;j++){
            int element2=arr[j];
            for(int k=j+1;k<7;k++){
                int element3=arr[k];
                if(element+element2+element3==sum){
                    cout<<"("<<element<<","<<element2<<","<<element3<<")"<<" ";
                }
            }
        }
    }
}