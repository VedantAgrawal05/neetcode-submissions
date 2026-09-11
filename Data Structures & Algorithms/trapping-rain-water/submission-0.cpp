class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int lmax = height[left];
        int rmax = height[right];

        int tot_water = 0;

        while(left < right){
            if(lmax < rmax){
                left++;
                lmax = max(lmax,height[left]);
                tot_water += lmax - height[left];
            }
            else{
                right--;
                rmax = max(rmax,height[right]);
                tot_water += rmax - height[right];
            }
        }

        return tot_water;
        
    }
};
