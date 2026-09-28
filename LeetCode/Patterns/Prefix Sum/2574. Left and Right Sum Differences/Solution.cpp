class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {

        int n=nums.size();

        vector<int> leftSum(n);
        vector<int> rightSum(n);
        vector<int> answer(n);


        for(int i=0;i<nums.size();i++){
            int sum=0;
            int s=0;
            for(int j=i-1;j>=0;j--){
                if(j<0){
                    // return sum=0;
                    leftSum[i]=0;
                }

                sum=sum+nums[j];
            }
             leftSum[i]=sum;

             for(int j=i+1;j<nums.size();j++){
                if(j<nums.size()){
                    // return s=0;
                    rightSum[i]=0;
                }
                s=s+nums[j];
             }
             rightSum[i]=s;
        }

        for(int i=0;i<n;i++){
            answer[i]=abs(leftSum[i]-rightSum[i]);
        }
        return answer;

        
    }
};