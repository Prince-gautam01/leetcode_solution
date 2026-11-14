class Solution {
public:
    int smallestAbsent(vector<int>& nums) {

        int sum=0;
        double avg;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        avg=(double)sum/nums.size();

        int x=max(1,(int)floor(avg)+1);
        while(true){
            bool found=false;
                for(int i=0;i<nums.size();i++){
                    if(nums[i]==x){
                    found=true;
                    break;
                }
            }

            if(!found){
                return x;
            }
             x++;
        }
        
    }
};