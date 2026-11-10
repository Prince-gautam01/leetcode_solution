class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int> ans;
        vector<int> res;

        while(n!=0){
            int k=n%10;
            ans.push_back(k);
            n=n/10;
        }

        for(int i=0;i<ans.size();i++){
            if(ans[i]!=0){

            res.push_back(ans[i] * pow(10,i));
            }
        }

        sort(res.begin(),res.end(),greater<int>());
        return res;

        
    }
};