class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> sumMap;

        for(int i = 0;i<nums.size();i++)
        {
            int complement = target - nums[i];
            if(sumMap.count(complement)){
                return {sumMap[complement],i};
            }

            sumMap[nums[i]] = i;
        }
        return {};
    }
};
