class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        int res = 0;
        while(low <= high){
            int mid = low + (high - low) / 2;
            long long prod = (long long) mid * mid;
            if(prod == x){
                return mid;
            }else if(prod < x){
                low = mid + 1;
                res = mid;
            }else{
                high = mid - 1;
            }
        }
        return res;
    }
};