class Solution {
public:
    string longestSubstring(string s, int n) {
        int nax = 0, i = 0, j = 0;
        string out = "-1";
    
        for( ; i < n && j < n; ++j) {
            string str = s.substr(i, j - i + 1);
    
            if (nax < str.size() && s.find(str, j + 1) != string::npos) {
                nax = str.size();
                out = str;
            } else 
                ++i;
        }
        return out;
    }
};
