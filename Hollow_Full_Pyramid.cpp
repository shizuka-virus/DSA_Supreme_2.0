#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){
        for(int s=i;s<=5;s++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            if(i==5){
                if(j%2!=0){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else if(j==1||j==i*2-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}