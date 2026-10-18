class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty()){
            return false;
        }
        int rows = matrix.size();
        int cols = matrix[0].size();

        int l = 0;
        int r = rows - 1;
        
        while(l <= r){
            int mid  = l + (r-l)/2;
            if(target < matrix[mid][0]){
                r = mid - 1;
            }
            else if(target > matrix[mid][cols - 1]){
                l = mid + 1;
            }
            else{
                int l2 = 0;
                int r2 = cols - 1;
                
                while(l2 <= r2){
                    int mid2 = l2 + (r2-l2)/2;
                    if(target == matrix[mid][mid2]){
                        return true;
                    }
                    else if(target < matrix[mid][mid2]){
                        r2 = mid2 - 1;
                    }
                    else if(target > matrix[mid][mid2]){
                        l2 = mid2 + 1;
                    }
                }
                return false; 
            }
        }

        return false;
    }
};
