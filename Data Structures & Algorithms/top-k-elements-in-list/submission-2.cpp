class Solution {
public:
    static bool helper(pair<int,int>&a,pair<int,int>&b)
    {
        return a.second>b.second;
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int,int> temp;
        for(int i=0;i<nums.size();i++)
        {
            temp[nums[i]]++;
        }
        vector<pair<int,int>> cnt ;
        for(auto &p:temp)
        {
            cnt.push_back({p.first,p.second}); 
        }
        sort(cnt.begin(),cnt.end(),helper);
        for(auto&p:cnt)
        {
            if(k==0)
            break;
            else{
                ans.push_back(p.first);
                k--;
            }
        }

        return ans;
    }
};
