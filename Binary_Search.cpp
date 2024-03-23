#include<iostream>
#include<vector>
using namespace std;
class Sloution{
    public:
    int St(vector<int>&nums){
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        int target=5;
        while(start<=end){
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid]){
                end=mid-1;
            }
            else if(target<nums[mid]){
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return -1;
    }
};
int main(){
    vector<int>arr={2,4,5,6,2,7};
    Sloution obj;
    if(obj.St(arr)==-1){
        cout<<"not found.";
    }
    else{
        cout<<obj.St(arr);
    }
}