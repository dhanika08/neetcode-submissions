class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        string smallest = strs[0];
        string largest = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            if (strs[i] < smallest) smallest = strs[i];
            if (strs[i] > largest) largest = strs[i];
        }

        int i = 0;
        while (i < smallest.size() &&
               i < largest.size() &&
               smallest[i] == largest[i]) {
            i++;
        }

        return smallest.substr(0, i);
    }
};