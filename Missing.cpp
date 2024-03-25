#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    Solution(vector<int>&nums){
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i]);
            if(nums[index-1]>0){
                 nums[index-1]*=-1;
            }   
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                cout<<i+1;
            }
        } 
    }
};
int main(){
    vector<int>arr={1,5,3,4,4};
    Solution obj(arr);
}