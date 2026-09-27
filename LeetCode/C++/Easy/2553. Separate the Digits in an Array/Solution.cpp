class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> answer;
        for(int i=0;i<nums.size();i++){
            int ans=0;
            while(nums[i]!=0){
                ans=ans*10 +(nums[i]%10);
                nums[i]= nums[i]/10;
            }
           
             while(ans!=0){
                answer.push_back(ans%10);
               ans=ans/10;
            }

        }
        return answer;
        
    }
};