class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> freq;
        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;
        }
        vector<pair<int, int>> temp;
        for(auto it: freq){
            temp.push_back({it.second, it.first});
        }
        sort(temp.rbegin(), temp.rend());
        for(int i=0; i<k; i++){
            ans.push_back(temp[i].second);
        }
        return ans;
    }
};
