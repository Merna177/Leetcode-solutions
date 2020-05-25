class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        int lengthA= A.size(),lengthB=B.size();
        vector<vector<int> > dp(lengthA+1, vector<int>(lengthB+1, 0));
        for(int i=1;i<=lengthA;i++){
            for(int j=1;j<=lengthB;j++){
                if(A[i-1]==B[j-1]){
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[lengthA][lengthB];

    }
};
