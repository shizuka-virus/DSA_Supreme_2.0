#include<iostream>
using namespace std;
float dis(float d){
    return d*1000;
}
int main(){
    float Distance;
    cout<<"Enter the distance in KM=";
    cin>>Distance;
    cout<<"The distance in Miles="<<dis(Distance);
}