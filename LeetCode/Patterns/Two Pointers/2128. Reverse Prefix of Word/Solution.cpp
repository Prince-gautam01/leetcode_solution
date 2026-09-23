class Solution {
public:
    string reversePrefix(string word, char ch) {

        // string temp(word.size(),' ');
        string temp="";

        for(int i=0;i<word.size();i++){
            if(word[i]==ch){
                for(int j=i;j>=0;j--){
                    temp.push_back(word[j]);
                }

                for(int j=i+1;j<word.size();j++){
                    temp.push_back(word[j]);
                }
        return temp;
            }
        }
    return word;

        
    }
};