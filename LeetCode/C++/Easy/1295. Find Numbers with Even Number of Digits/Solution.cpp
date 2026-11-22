class Solution {
public:
    int findNumbers(vector<int>& nums) {

        int even=0;
        int odd =0;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            int temp=nums[i];
            while(temp!=0){
                int k=temp%10;
                cnt++;
                temp=temp/10;
            }
            if(cnt%2==0){
                even++;
            }
            else{
                odd++;
            }
        }

        return even;
        
    }
};