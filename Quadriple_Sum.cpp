#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,3,4,5,6,7,8,9,2};
    int sum=9;
    for(int i=0;i<10;i++){
        int element=arr[i];
        for(int j=i+1;j<10;j++){
            int element2=arr[j];
            for(int k=j+1;k<10;k++){
                int element3=arr[k];
                for(int l=k+1;l<10;l++){
                    int element4=arr[l];
                    if(element+element2+element3+element4==sum){
                        cout<<"("<<element<<","<<element2<<","<<element3<<","<<element4<<")"<<" ";
                    }
                }
            }
        }
    }
}
