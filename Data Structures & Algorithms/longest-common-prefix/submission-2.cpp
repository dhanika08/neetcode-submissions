class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0) return "";
        string prefix = strs[0];
        for(int i = 0; i<strs.size(); i++){
            int j = 0;
            string temp = strs[i];
            while(j < min(prefix.length(), temp.length())){
                if(prefix[j] != temp[j]){
                    break;
                }
                j++;
            }
            prefix.resize(j);
        }
        return prefix;
    }
};