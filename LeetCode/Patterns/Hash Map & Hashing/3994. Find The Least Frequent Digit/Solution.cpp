class Solution {
public:
    int getLeastFrequentDigit(int n) {

        map<int,int> m;
        while(n!=0){
            int k=n%10;
            m[k]++;
            n=n/10;
        }

        int ans;
        int mini=INT_MAX;
        for(auto x:m){
            if(x.second<mini)
            {
                mini=x.second;
                ans= x.first;
                }
            }

        return ans;
        
    }
};