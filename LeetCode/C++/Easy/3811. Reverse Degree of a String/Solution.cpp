class Solution {
public:
    int reverseDegree(string s) {


        int ans=0;
        for(int i=1;i<=s.size();i++){
                char ch=s[i-1];
                int value='z'- ch + 1;

                ans=ans+(value*i);
            
        }
        return ans;
        
    }
};