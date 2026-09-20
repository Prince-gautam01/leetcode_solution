class Solution {

    private:
    int solve(vector<int>& nums,int i,int currNum){
        if(i==nums.size()){
            return currNum;
        }

       //inc
       int include=solve(nums,i+1,currNum ^ nums[i]);
       //exc
       int exclude=solve(nums,i+1,currNum);

       return include + exclude; 


       
    }
public:
    int subsetXORSum(vector<int>& nums) {       
        return solve(nums,0,0);
       
    }
};