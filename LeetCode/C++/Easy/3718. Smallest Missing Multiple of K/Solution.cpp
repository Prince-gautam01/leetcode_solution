class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<int> ans;
        int res=0;

        for(int i=0;i<n;i++){
            if(nums[i]%k==0){
                ans.push_back(nums[i]);
            }
           }

        if(ans.size()<2){
            if(ans[0]-k ==0){
               res= ans[0]+k;
            }
            else{
                return k;
            }
        }

        for(int i=1;i<ans.size();i++){
            if(ans[0]-k!=0){
                res= k;
            }
            
            else if(ans[i]-ans[i-1]!=0){
                res= ans[i]+k;

            }
        }

        
    return res;
        
    }
};