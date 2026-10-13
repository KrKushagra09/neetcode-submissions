class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> duplicate;
        for(auto i:nums)
        {
            duplicate[i]++;
            if(duplicate[i]>1)
            return true;
        }
        return false;

    }
};