class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int max_count = 0;
        int ele;
        unordered_map<int, int> mpp;
        for(int i =0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        for(auto it: mpp){
            if(it.second > max_count){
                max_count = it.second;
                ele = it.first;
            }
        }
        return ele;
    }
};