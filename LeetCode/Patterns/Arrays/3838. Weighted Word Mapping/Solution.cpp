class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        string ans="";
        string temp="";
        for(int i=0;i<words.size();i++){
        int sum=0;
            temp=words[i];
            for(int j=0;j<temp.size();j++){
                char x=temp[j];
                sum=sum+weights[x-'a'];
            }

            int val=sum%26;
            char ch='z'-val;
            ans.push_back(ch);
        }
        return ans;
        
    }
};