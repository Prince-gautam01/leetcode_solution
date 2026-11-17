class Solution {
public:
    int maxSum(vector<int>& nums) {

        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }

    int sum=0;
        for(auto x:m){
            if(x.first>0){
                sum=sum+x.first;
            }
        }

        return sum;
        
    }
};