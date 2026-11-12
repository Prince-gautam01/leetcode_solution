class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {


       vector<int> ans; 

      
        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }

        int cnt=0;
        for(auto x=m.rbegin();x!=m.rend();x++){
            if(cnt<k){
                int a=x->first;
                ans.push_back(a);
               
                cnt++;
            }
        }

        return ans;
        
    }
};