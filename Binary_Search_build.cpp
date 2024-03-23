#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector <int> arr={1,2,3,4,5,6};
    if(binary_search(arr.begin(),arr.end(),3)){
        cout<<"Found";
    }
    else{
        cout<<"Not Found.";
    }
}