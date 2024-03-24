#include<iostream>
#include<vector>
using namespace std;
class Sloution{
    public:
    int St(vector<int>&nums,int target){
        int ans=-1;
        int st=0;
        int en=nums.size()-1;
        int mid=st+(en-st)/2;
        while(st<=en){
            if(nums[mid]==target){
                ans=mid;
                en=mid-1;
            }
            else if(nums[mid]<target){
                st=mid+1;
            }
            else if(nums[mid]>target){
                en=mid-1;
            }
            mid=st+(en-st)/2;
        }
        return ans;
    }
};
int main(){
    vector<int> arr={2,3,4,4,4,5,6};
    int target=4;
    Sloution obj;
    cout<<obj.St(arr,target);
}