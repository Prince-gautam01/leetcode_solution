class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int eSum=0;
        int sum=0;

        for(int i=0;i<n;i++){
            int dSum=0;
            eSum=eSum+nums[i];
            while(nums[i]!=0){
                dSum=dSum+(nums[i]%10);
                nums[i]=nums[i]/10;
            }
            sum=sum+dSum;
        }

        return abs(sum-eSum);
        
    }
};