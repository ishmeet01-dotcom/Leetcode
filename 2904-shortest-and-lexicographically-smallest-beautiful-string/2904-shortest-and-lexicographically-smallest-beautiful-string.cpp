class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        string ans = "";
        int left = 0, ones = 0;

        for (int right = 0; right < n; ++right) {
            if (s[right] == '1') ones++;

            while (ones == k) {
                string sub = s.substr(left, right - left + 1);
                if (ans.empty() || sub.size() < ans.size() || 
                   (sub.size() == ans.size() && sub < ans)) {
                    ans = sub;
                }
                if (s[left] == '1') ones--;
                left++;
            }
        }
        return ans;
    }
};