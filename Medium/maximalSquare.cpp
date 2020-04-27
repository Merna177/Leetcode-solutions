class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
       int row = matrix.size();
       if(row==0) return 0;
       int col = matrix[0].size();
    
    vector<int> dp(col+1, 0);
    int mx = 0;
        int prev=0;
    for(int i = 1; i <= row; i ++){
        for(int j = 1; j <= col; j ++){
            int temp=dp[j];
            if(matrix[i-1][j-1] == '0')
                dp[j] = 0;
            else
                dp[j] = 1 + min(dp[j-1], min(dp[j], prev));
            
            mx = max(mx, dp[j]);
            prev=temp;
        }
    }
    return mx*mx;
    }
};
