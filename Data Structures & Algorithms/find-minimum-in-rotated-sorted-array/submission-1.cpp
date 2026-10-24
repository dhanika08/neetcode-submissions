class Solution {
public:
    int findMin(vector<int> &nums) {
        int low = 0;
        int high = nums.size()-1;
        int res = nums[low];
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[low] <= nums[mid]){
                res = min(nums[low], res);
                low = mid+1;
            }else{
                res = min(nums[mid], res);
                high = mid-1;
            }
        }
        return res;
    }
};
