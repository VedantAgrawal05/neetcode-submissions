class Solution {
public:
    int sumofsquares(int n){
        int sum = 0;

        while(n>0){
            int digit = n%10;
            sum += digit*digit;
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        while(n != 1){
            n = sumofsquares(n);
            
            if(n == 4)
                return false;
        }
        return true;
    }
};
