class Solution {
public:
    vector<int> countOppositeParity(vector<int>& nums) {
        
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
        int odd=0;
        int even=0;
            if(nums[i]%2==0){
                    for(int j=i;j<nums.size();j++){
                        if(nums[j]%2!=0){
                            odd++;
                        }   
                    }
                    ans.push_back(odd);
            }

            else{
                     for(int j=i;j<nums.size();j++){
                         if(nums[j]%2==0){
                             even++;   
                        }
                     }

                     ans.push_back(even);
             }

    }

    return ans;
    }
};