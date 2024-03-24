#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    void St(vector<int>&nums){
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]==nums[i]){
                    cout<<nums[i];
                }
            }
            }
        }
    };
int main(){
    vector<int>arr={1,2,3,4,5,6,1,2,4,7};
    Solution obj;
    obj.St(arr);
}