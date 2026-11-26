class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }

        int ans=0;
        for(auto x:m){
            if(x.second==2){
               ans=ans^x.first;
            }
        }
        return ans;
    }
};