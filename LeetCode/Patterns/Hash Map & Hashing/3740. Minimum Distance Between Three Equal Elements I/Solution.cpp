class Solution {
public:
    int minimumDistance(vector<int>& nums) {

        int ans=INT_MAX;
        int n=nums.size();
        if(n<3){
            return -1;
        }
        else{
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                if(nums[i]==nums[j]){
                    for(int k=j+1;k<nums.size();k++){
                        if(nums[j]==nums[k]){
                            int sum=abs(i-j)+abs(j-k)+abs(k-i);
                            ans=min(ans,sum);
                            ;
                        }
                    }
                }
            }
        }
        return ans;

        }

        return -1;
        
    }
};