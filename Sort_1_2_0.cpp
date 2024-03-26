#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    void st(vector<int>&num){
        int low=0;
        int med=0;
        int hi=num.size()-1;
        while(med<=hi){
            if(num[med]==0){
                swap(num[med],num[low]);
                med++;
                low++;
            }
            else if(num[med]==1){
                med++;
            }
            else{
                swap(num[med],num[hi]);
                hi--;
            }
        }
        for(auto f: num){
            cout<<f;
        }

    }
};
int main(){
    vector<int> arr={0,1,2,1,0,1,2,1};
    Solution obj;
    obj.st(arr);
}