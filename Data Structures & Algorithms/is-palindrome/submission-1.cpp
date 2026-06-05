class Solution {
   public:
    bool isPalindrome(string s) {
        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (tolower(s[i]) >= 'a' && tolower(s[i]) <= 'z' || s[i] >= '0' && s[i] <= '9') {
                temp += s[i];
            }
        }
        cout << temp;
        int left = 0;
        int right = temp.length() - 1;
        while (left <= right) {
            if (tolower(temp[left]) != tolower(temp[right])) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
