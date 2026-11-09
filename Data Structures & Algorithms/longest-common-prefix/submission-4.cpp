class Solution {
public:
    string compareStrings(string string1, string string2){
        int i = 0, j = 0;
        while(i < string1.length() && j < string2.length()){
            if(string1[i] == string2[j]){
                i++;
                j++;
            }
            else{
                return string1.substr(0, i);
            }
        }
        if(i == string1.length()) return string1;
        else return string2;
    }
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string prefix = strs[0];
        for(int i = 1; i<n; i++){
            string ans = compareStrings(prefix, strs[i]);
            prefix = ans;
        }
        return prefix;
    }
};