class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frq_map;
        for(int i : nums)
        {
            frq_map[i]++;
        }
        vector<pair<int,int>> frq_vec;
        for(auto const &pair : frq_map)
        {
            frq_vec.push_back({pair.second,pair.first});
        }
        sort(frq_vec.begin(),frq_vec.end(),greater<pair<int,int>>());

        vector<int> results;
        for(int i = 0;i<k;i++)
        {
            results.push_back(frq_vec[i].second);
        }
        
        

        return results;
    }
};
