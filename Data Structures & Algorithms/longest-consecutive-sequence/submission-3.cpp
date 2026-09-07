class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        unordered_set<int> numSet(nums.begin(),nums.end());
        
        int longest = 1;
        
        for(int num : numSet)
        {
            if(!numSet.count(num - 1)){

                int curr_num = num;
                int streak = 1;
            
                while(numSet.count(curr_num+1))
                {
                    curr_num++;
                    streak++;

                    longest = max(longest,streak);
                }
            }
        }

        return longest;

    }
};
