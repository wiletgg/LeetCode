class Solution {
public:
    int minFlips(string s) {
        int n = s.length();
        string s2 = s + s; 
        int cnt1 = 0; // 010101
        int cnt2 = 0; // 101010
        int ans = n;

        for (int i = 0; i < 2 * n; i++) {
            if (s2[i] != (i % 2 == 0 ? '0' : '1')) cnt1++;
            if (s2[i] != (i % 2 == 0 ? '1' : '0')) cnt2++;
            if (i >= n) {
                int left = i - n;
                if (s2[left] != (left % 2 == 0 ? '0' : '1')) cnt1--;
                if (s2[left] != (left % 2 == 0 ? '1' : '0')) cnt2--;
            }
            if (i >= n - 1) {
                ans = min({ans, cnt1, cnt2});
            }
        }
        return ans;
    }
};
