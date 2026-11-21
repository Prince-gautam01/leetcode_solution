class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {

        unordered_map<int,int> m;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        for(auto p:m){
            if(p.second==2){
                ans.push_back(p.first);
            }
        }
        return ans;




        
    }
};