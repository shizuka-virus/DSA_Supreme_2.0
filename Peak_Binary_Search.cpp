#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int St(vector<int>&nums){
        int st=0;
        int en=nums.size()-1;
        int mid=st+(en-st)/2;
        while(st<en){
            if(nums[mid]<nums[mid+1]){
                st=mid+1;
            }
            else{
                en=mid;
            }
            mid=st+(en-st)/2;
        }
        return st;
    }
};
int main(){
    vector<int>arr={1,2,4,10,5,3,2,1};
    Solution obj;
    cout<<obj.St(arr);
}