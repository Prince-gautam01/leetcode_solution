class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
        int sum=0;
            while(nums[i]!=0){
                 sum=sum + (nums[i]%10);
                nums[i]=nums[i]/10;
            }
            ans.push_back(sum);
            mini=min(mini,sum);
        }

        // sort(ans.begin(),ans.end());
        return mini;
        
    }
};