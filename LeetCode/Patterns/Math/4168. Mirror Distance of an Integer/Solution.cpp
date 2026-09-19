class Solution {
    private:
    int reverse(int n){
        int num=0;
        while(n!=0){
            num=(num*10) +(n%10);
            n=n/10;

        }

        return num;
    }
public:
    int mirrorDistance(int n) {

        int newDigit=reverse(n);
        if(newDigit>=n){
            return (newDigit-n);
        }
        else{
            return (n-newDigit);
        }
        
    }
};