#include<iostream>
#include<vector>
using namespace std;
class Solution{ 
    public:
    void Sl(vector<int>&nums){
        int st=0;
        int en=nums.size()-1;
        while(st<en){
            if(nums[st]>=0){
                swap(nums[st],nums[en]);
                    en--;
            }
            else{
                st++;
            }
        }
        for(auto i:nums){
            cout<<i;
        }
    }
};
int main(){
    vector<int> arr={1,2,-2,0,-3,3,5,-7,7};
    Solution obj;
    obj.Sl(arr);
}
