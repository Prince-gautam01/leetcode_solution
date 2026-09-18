class Solution {
    private:
    int solve(int i,int j,vector<vector<int>>& matrix,int m,int n,vector<vector<int>> &dp){

        if(i>=m || j>=n || i<0 || j<0){
            return INT_MAX;
        }
        if(i>=m-1){
            return matrix[i][j];
        }

        if(dp[i][j]!=INT_MAX){
            return dp[i][j];
        }



        int below=solve(i+1,j-1,matrix,m,n,dp);
        int DiagLeft=solve(i+1,j,matrix,m,n,dp);
        int DiagRight=solve(i+1,j+1,matrix,m,n,dp);
        dp[i][j]=matrix[i][j] + min(below,min(DiagLeft,DiagRight));

        return dp[i][j];
    }
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
       int ans=INT_MAX;

        vector<vector<int>> dp(m,vector<int>(n,INT_MAX));

        for(int j=0;j<n;j++){
            ans=min(ans,solve(0,j,matrix,m,n,dp));
        }
      

        return ans;
        
    }
};