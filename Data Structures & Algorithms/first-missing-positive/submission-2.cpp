class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        vector<bool> temp(n, false);
        for(int i = 0; i<n; i++){
            if(nums[i] > 0 && nums[i] <= n){
                temp[nums[i] - 1] = true;
            }
        }
        for(int i = 0; i<n; i++){
            if(temp[i] == false){
                return i+1;
            }
        }
        return n+1;
    }
};