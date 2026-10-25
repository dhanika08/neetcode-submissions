class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = word1.length();
        int m = word2.length();
        string res = "";
        int i=0, j=0;
        int pick = 0;
        while(i<n && j<m){
            if(pick == 0){
                res += word1[i];
                i++;
                pick = 1;
            }else if(pick == 1){
                res += word2[j];
                j++;
                pick = 0;
            }
        }
        while(i < n) res += word1[i++];
        while(j < m) res += word2[j++];
        return res;
    }
};