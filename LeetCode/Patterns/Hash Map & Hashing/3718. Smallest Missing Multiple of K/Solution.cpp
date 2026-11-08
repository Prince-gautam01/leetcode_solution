class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        int n=nums.size();
        vector<bool> present(101,false);
        

        for(int i:nums){
            if(i%k==0){
                present[i/k]=true;
            }
           }


        for(int i=1; ;i++){
            if(!present[i]){
               return i*k;
            }
        }

        
    return -1;
        
    }
};