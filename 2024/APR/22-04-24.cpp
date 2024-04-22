class Solution {
public:
    int minRow(int n, int m, vector<vector<int>> a) {
        int out = 0;
        for(int i = 0; i < n; ++i){
            for(int j = 1; j < m; ++j)
                a[i][j] += a[i][j-1];
            if(a[out].back() > a[i].back())
                out = i;
        }
        return out + 1;
    }
};
