class Solution {
public:
    int minimumDistance(vector<int>& nums) {

        int ans=INT_MAX;
        int n=nums.size();
        
        
        if(n>=3){
            for(int i=0;i<nums.size()-2;i++){
                for(int j=i+1;j<nums.size()-1;j++){
                    if(nums[i]==nums[j]){
                        for(int k=j+1;k<nums.size();k++){
                            if(nums[i]==nums[k]){
                                int sum=abs(i-j)+abs(j-k)+abs(k-i);
                                ans=min(ans,sum);
                            }
                        }
                     }
                }
            }
         if(ans!=INT_MAX){
            return ans;
         }
         else{
            return -1;
         }
        }
        else{
            return -1;   
        }
    }
};