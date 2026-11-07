class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n-2; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int left = i+1;
            int right = n-1;
            int sum = -1 * nums[i];
            while(left < right){
                int s = nums[left] + nums[right];
                if(sum == s){
                    res.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while(left < right and nums[left] == nums[left -1]) left++;
                    while(left < right and nums[right] == nums[right+1]) right--;
                }else if(s < sum){
                    left++;
                }else{
                    right--;
                }
            }
        }
        return res;
    }
};
