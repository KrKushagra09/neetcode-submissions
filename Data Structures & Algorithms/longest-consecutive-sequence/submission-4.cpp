class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> cons(nums.begin(),nums.end());
        int longest=0;int length=0;
        for(int i=0;i<nums.size();i++)
        {
            if(cons.find(nums[i]-1)==cons.end())
            {
                length=1;
                while(cons.find(nums[i]+length)!=cons.end())
                {
                    length++;
                }

            }
            longest=max(longest,length);
        }
        return longest;
    }
};
