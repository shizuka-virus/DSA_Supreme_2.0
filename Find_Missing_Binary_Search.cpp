#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int St(vector<int>ap){
        int st=0;
        int ans=0;
        int en=ap.size()-1;
        int mid=st+(en-st)/2;
        while(st<=en){
            if(ap[mid]-mid==2){
                ans=ap[mid]-1;
                en=mid-1;
            }
            else if(ap[mid]-mid==1){
                st=mid+1;
            }
        }
        return ans;
    }
};
using namespace std;
int main(){
    vector<int>arr={1,2,3,4,5,7,8,9,10};
    Solution obj;
    cout<<obj.St(arr);

}