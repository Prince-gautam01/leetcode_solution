class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {

        int sum=0;
        map<int ,int> m;
        for( auto i:nums){
            m[i]++;
        }

        for(auto x:m){
            if(x.second % k ==0){
                int a=x.second;
                int b=x.first;
                sum=sum+ a*b;
            }
        }

        return sum;
        
    }
};