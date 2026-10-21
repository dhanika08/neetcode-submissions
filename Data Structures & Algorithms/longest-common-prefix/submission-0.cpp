class Solution {
public:
    string helper(string &first, string &second){
        int len = 0;
        string ans = "";
        if(first.size() < second.size()){
            len = first.size();
        }else{
            len = second.size();
        }
        for(int i =0; i<len; i++){
            if(first[i] == second[i]){
                ans += first[i];
            }else{
                break;
            }
        }
        return ans;
    }
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0){
            return "";
        }
        if(strs.size() == 1){
            return strs[0];
        }
        string start = helper(strs[0], strs[1]);
        if(start == "") return "";
        for(int i = 2; i<strs.size(); i++){ 
            string common = helper(strs[i], start);
            start = common;
        }
        return start;
    }
};