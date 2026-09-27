class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int x=nums[i];


            int digit=0;
            int temp=x;


            while(temp!=0){
                digit++;
                temp=temp/10;
            }

            int div=1;
            for(int i=1;i<digit;i++){
                div=div*10;
            }



            while(div!=0){

                ans.push_back(x/div);
                x=x%div;
                div=div/10;
                
            }

        }
        return ans;
        
    }
};