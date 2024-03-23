#include<iostream>
using namespace std;
int main(){
    for(char i='A';i<='E';i++){
        for(char j='A';j<=i;j++){
            cout<<j;
        }
        for(char j=i-1;j>='A';j--){
            cout<<j;
        }
        cout<<endl;
    }
}