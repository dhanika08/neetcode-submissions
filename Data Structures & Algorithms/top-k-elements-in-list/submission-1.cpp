class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k){
        vector<int> result;
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        vector<pair<int, int>> vec(mp.begin(),mp.end());
        sort(vec.begin(), vec.end(), [](const auto &a, const auto &b){
            return a.second>b.second;
        });
        for(int i = 0; i<k; i++){
            result.push_back(vec[i].first);
        }
        return result;
    }
};
