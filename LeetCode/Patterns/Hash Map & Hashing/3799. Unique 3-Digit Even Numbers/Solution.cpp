class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        set<int> ans;

        int n=digits.size();

        for(int i=0;i<n;i++){
            if(digits[i]%2==0){
                for(int j=0;j<n;j++){
                     if(j!=i && (digits[j]!=0)){
                         for(int k=0;k<n;k++){
                              if(k!=j && k!=i )
                              {
                                int num=digits[j]*100 + digits[k]*10 + digits[i];
                                ans.insert(num);

                              }

                         }

                     }

                }

            }
            
        }
    

        return ans.size();

        
    }
};