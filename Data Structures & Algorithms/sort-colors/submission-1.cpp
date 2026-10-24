class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(low <= high && mid <= high){
            if(nums[mid] == 0){
                cout<<low<<" "<<mid<<endl;
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }else if(nums[mid] == 1){
                cout<<mid<<endl;
                mid++;
            }else if(nums[mid] == 2){
                cout<<mid<<" "<<high<<endl;
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};