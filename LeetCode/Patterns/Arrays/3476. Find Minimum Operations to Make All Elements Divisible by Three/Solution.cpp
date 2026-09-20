class Solution {
public:
    int minimumOperations(vector<int>& nums) {

        int rem;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3!=0){
                rem=nums[i]%3;
                if(rem==1){
                    cnt++;
                }
                else if(rem==2){
                    cnt++;
                }
            }
            else{
                cnt=cnt+0;
            }
        }
        return cnt;
        
    }
};