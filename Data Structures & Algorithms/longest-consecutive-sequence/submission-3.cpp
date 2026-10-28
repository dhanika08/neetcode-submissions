class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());
      
        int count = 1;
        int max_count = 1;
        for(int i=1; i < n; i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            if(nums[i] == (nums[i-1] + 1)){
                count++; 
            }
            else{ 
                count = 1;
            }
            max_count = max(count, max_count);
        }
        return max_count;
    }
};
