class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        return 0;
        set<int> cons;
        int cnt=1;
        int maxi=1;
        for(auto i:nums)
        {
            cons.insert(i);
        }
        
        vector<int> temp;
        for(auto i:cons)
        {
            temp.push_back(i);
        }
        for(int i=0;i<temp.size()-1;i++)
        {
          if(temp[i+1]-temp[i]==1)
          {
          cnt++;
          
          }
          else
          {
          cnt=1;
          }
          maxi=max(maxi,cnt);
        }
        return maxi;
    }
};
