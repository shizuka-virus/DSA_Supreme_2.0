#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int s=i;s<=5;s++){
            cout<<" ";
        }
        for(int j=1;j<=i*2-1;j++){
            if(j==1){
                cout<<"*";
            }
            else if(j==2*i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
     for(int i=5;i>=1;i--){
        for(int s=i;s<=5;s++){
            cout<<" ";
        }
        for(int j=1;j<=i*2-1;j++){
            if(j==1){
                cout<<"*";
            }
            else if(j==2*i-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}