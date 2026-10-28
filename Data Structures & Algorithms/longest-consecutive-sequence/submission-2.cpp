class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0 || nums.size() == 1) return nums.size();
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int i = 1;
        int count = 1;
        int max_count = 0;
        while(i < n){
            if(nums[i] == (nums[i-1] + 1)){
                count++;
                max_count = max(count, max_count);
                i++;  
            }else if(nums[i] == nums[i-1]){
                i++;
            }
            else{ 
                max_count = max(count, max_count);
                count = 1;
                i++;
            }
        }
        max_count = max(count, max_count);
        return max_count;
    }
};
