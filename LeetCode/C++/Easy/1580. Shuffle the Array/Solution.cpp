class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {

        vector<int> ans;

        int s=0;
        int e=n;
        while(s<n && e<2*n){
            ans.push_back(nums[s]);
            s++;
             ans.push_back(nums[e]);
            e++;
        }

        return ans;
        
    }
};