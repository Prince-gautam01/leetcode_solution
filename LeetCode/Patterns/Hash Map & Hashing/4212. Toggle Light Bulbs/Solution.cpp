class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {

        map<int,int> m;
        vector<int> ans;
        for(int i=0;i<bulbs.size();i++){
            m[bulbs[i]]++;
        }


        for(auto x:m){
            if(x.second%2!=0){
                ans.push_back(x.first);
            }
        }

        sort(ans.begin(),ans.end());
        return ans;
        
    }
};