class Solution {
public:
    string breakPalindrome(string str) {
         int n = str.size();
        for (int i = 0; i < n / 2; ++i) {
            if (str[i] != 'a') {
                str[i] = 'a';
                return str;
            }
        }
        str[n - 1] = 'b';
        return n < 2 ? "" : str;
    }
};