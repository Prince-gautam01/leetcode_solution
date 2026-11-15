class Solution {
    private:
    bool checkPrime(int n){

        if(n<2){
            return false;
        }

        for(int i=2;i<n;i++){
            if(n%i==0){
                return false;
                break;
            }
        }
          return true;
    }
public:
    bool checkPrimeFrequency(vector<int>& nums) {

        map<int,int>m;
        for(auto i:nums){
            m[i]++;
        }


       
            for(auto x: m){
                if(checkPrime(x.second)){
                    return true;
                }
            }
        
        return false;
        
    }
};