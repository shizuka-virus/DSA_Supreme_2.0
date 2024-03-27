#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    Solution(vector<int>&nums){
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int index=abs(nums[i]);
            if(nums[index]<0){
                ans=index;
                break;
            }
            nums[index]*=-1;
        }
        cout<<ans;   
    }
};
int main(){
    vector<int>arr={1,2,3,4,4};
    Solution obj(arr);
}