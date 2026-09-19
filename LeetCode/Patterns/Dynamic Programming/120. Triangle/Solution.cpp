class Solution {
    private:
      int  solve(int i,int j,vector<vector<int>>& triangle,int n,vector<vector<int>> &dp){
        
        if(i>=n || j>=triangle[i].size() || i<0 || j<0){
            return INT_MAX;
        }

        if(i>=n-1){
            return triangle[i][j];   //base case
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }


        //rec call

        int index1=solve(i+1,j,triangle,n,dp);
        int index2=solve(i+1,j+1,triangle,n,dp);
        dp[i][j]=triangle[i][j] + min(index1,index2);

        return dp[i][j];

      }
public:
    int minimumTotal(vector<vector<int>>& triangle) {
    int n= triangle.size();

        vector<vector<int>> dp(n,vector<int>(n,-1));
        
    return solve(0,0,triangle,n,dp);
        
    }
};