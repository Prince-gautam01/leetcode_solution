class Solution {
public:
    string toLowerCase(string s) {

        string temp="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                char ch=s[i] + 32;
                temp.push_back(ch);
            }
            else if(s[i]>='a' && s[i]<='z'){
                char ch=s[i];
                temp.push_back(ch);
            }

            

        }

        return temp;
        
    }
};