class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        vector<double> ans;
        // double mini=51;
        sort(nums.begin(),nums.end());
        

        int i=0;
        int j=n-1;

        while(i<=n/2 && j>=n/2){
            double sum=(double)(nums[i]+nums[j])/2;

            ans.push_back(sum);
            // mini=min(mini,sum);
            i++;
            j--;
        

        }

        sort(ans.begin(),ans.end());
        double res=ans[0];

        return res;
    }
};