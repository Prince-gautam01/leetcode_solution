class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        vector<int> temp;
        int cnt=0;

        while(cnt!=k ){
        temp=nums;
        sort(temp.begin(),temp.end());
            for(int i=0;i<nums.size();i++){

            if(nums[i]==temp[0]){
                nums[i]=nums[i]*multiplier;
                
                break;
            }
            }
                cnt++;
            
        }
        
        return nums;    
    }
};