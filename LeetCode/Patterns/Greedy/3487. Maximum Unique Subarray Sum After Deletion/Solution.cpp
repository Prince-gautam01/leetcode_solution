class Solution {
public:
    int maxSum(vector<int>& nums) {

        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }

    int sum=0;
    int maxi=INT_MIN;
        for(auto x:m){
            maxi=max(maxi,x.first);
            if(x.first>0){
                sum=sum+x.first;
            }
        }
        if(sum==0){
            return maxi;
        }

        return sum;
        
    }
};