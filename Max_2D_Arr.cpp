#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{2,4,5},{6,10,2},{1,9,4}};
    int max=arr[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    cout<<"Maximum number is="<<max;
}