class Solution {
public:
    int digitFrequencyScore(int n) {

        // unordered_list<int,int> freq;

        vector<int> v(10,0);
        while(n!=0){
            int k=n%10;
            v[k]++;
            n=n/10;

        }
        int ans=0;
        for(int i=0;i<v.size();i++){
            ans=ans+(i*v[i]);
        }

        return ans;
    }
};