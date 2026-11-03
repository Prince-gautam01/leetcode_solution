class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
           int temp= nums[i];
           int sum=0;
            for(int j=i+1;j<nums.size();j++){
                sum=sum+nums[j];

            }
            double avg=sum/(n-i-1);

            if(temp>avg){
                cnt++;
            }
        }

        return cnt;
        
    }
};