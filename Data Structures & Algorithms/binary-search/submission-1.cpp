class Solution {
public:

    int binary_search(int l,int r,int target,vector<int>& nums){
        if(l > r){
            return -1;
        }
        int mid = l + (r-l)/2;
        if(target == nums[mid]){
            return mid;
        }
        else if(target > nums[mid]){
            l = mid+1;
            return binary_search(l,r,target,nums);
        }
        else if(target < nums[mid]){
            r = mid - 1;
            return binary_search(l,r,target,nums);
        }
        
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        return binary_search(0,n-1,target,nums);

    }
};
