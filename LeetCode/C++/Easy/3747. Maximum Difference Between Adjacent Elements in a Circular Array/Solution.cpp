class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int ans=INT_MIN;
        int n=nums.size();
        for(int i=1;i<nums.size();i++){
            int diff=abs(nums[i]-nums[i-1]);
            ans=max(ans,diff);
        }

        int k;
        if(nums.size()>2){
            k=abs(nums[0]-nums[n-1]);
        }
        ans=max(ans,k);
        return ans;
        
    }
};