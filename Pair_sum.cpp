#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[5]={1,2,7,4,5};
    int sum=9;
    for(int i=0;i<5;i++){
        int element=arr[i];
        for(int j=i+1;j<5;j++){
            int element2=arr[j];
            if(element+element2==sum){
                cout<<"("<<element<<","<<element2<<")"<<endl;
            }
        }
    }
}