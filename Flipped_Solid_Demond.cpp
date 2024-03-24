#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int j=i;j<=5;j++){
            cout<<"*";
        }
        for(int s=1;s<=i*2-1;s++){
            cout<<" ";
        }
        for(int j=i;j<=5;j++){
            cout<<"*";
        }

        cout<<endl;
    }
    for(int i=5;i>=1;i--){
        for(int j=i;j<=5;j++){
            cout<<"*";
        }
        for(int s=1;s<=i*2-1;s++){
            cout<<" ";
        }
        for(int j=i;j<=5;j++){
            cout<<"*";
        }

        cout<<endl;
    }
}