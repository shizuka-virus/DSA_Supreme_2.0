#include<iostream>
using namespace std;
int main(){
  for(int i=5;i>=1;i--){
    for(int j=1;j<=i;j++){
            if(i==5){
              cout<<"*";
            }
            else if(j==1||j==i){
              cout<<"*";
            }
            else{
              cout<<" ";
            }
    }
    cout<<endl;
  }
}  