class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
     vector<int> ans(nums.size());
     vector<int> pre(nums.size());
     vector<int> suff(nums.size());
     for(int i=0;i<nums.size();i++)
     {
        if(i==0)
        pre[i]=1;
        else
        pre[i]=(pre[i-1]*nums[i-1]);
     }
    for(int i=nums.size()-1;i>=0;i--)
     {
        if(i==nums.size()-1)
        suff[nums.size()-1]=1;
        else
        suff[i]=(suff[i+1]*nums[i+1]);
     }
     for(int i=0;i<nums.size();i++)
     {
        ans[i]=pre[i]*suff[i];
     }
     return ans;
    }
};
