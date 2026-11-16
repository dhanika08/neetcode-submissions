class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int index = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] == target){
                index = mid;
                return mid;
            }
            else if(nums[mid] > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
                index = mid;
            }
        }
        return index+1;
    }
};