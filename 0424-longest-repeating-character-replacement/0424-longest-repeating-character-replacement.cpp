class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxi = 0;
        int n = s.size();
        for (char c = 'A'; c <= 'Z'; c++) {
            int i = 0, j = 0;
            int count = 0; 
            while (j < n) {
                if (s[j] != c) {
                    count++;
                }
                while (count > k) {
                    if (s[i] != c) {
                        count--;
                    }
                    i++;
                }
                maxi = max(maxi, j - i + 1);
                j++;
            }
        }
        return maxi;
    }
};