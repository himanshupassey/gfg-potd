class Solution {
public:
    vector<int> search(string pattern, string text) {
        vector<int> out;
        int mod = 10;
        int h = pattern.size();
        int n = text.size();
        int hashp = 0;
        int hasht = 0;
        int p = 1;
        
        for (int i = 0; i < h - 1; ++i)
            p = (p * 26) % mod;
        
        for (int i = 0; i < h; ++i) {
            hashp = ((hashp * 26) + pattern[i]) % mod;
            hasht = ((hasht * 26) + text[i]) % mod;
        }
        
        for (int i = 0; i <= n - h; ++i) {
            if (hashp == hasht) {
                int j;
                for (j = 0; j < h; ++j)
                    if (pattern[j] != text[i + j])
                        break;
                        
                if (j == h)
                    out.push_back(i + 1);
            }
            if (i < n - h) {
                hasht = (26 * (hasht - text[i] * p) + text[i + h]) % mod;
                if (hasht < 0)
                    hasht += mod;
            }
        }
        return out;
    }
};
