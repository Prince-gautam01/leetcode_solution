class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {

        int ans=INT_MAX;
        for(int i=0;i<tasks.size();i++){
            vector<int> temp=tasks[i];
            int k=temp[0]+temp[1];
            ans=min(ans,k);
        }

        return ans;
        
    }
};