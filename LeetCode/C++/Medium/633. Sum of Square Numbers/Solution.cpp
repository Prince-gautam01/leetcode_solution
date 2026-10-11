class Solution {
public:
    bool judgeSquareSum(int c) {

        for(int i=1;i<c;i++){
            for(int j=i+1;j<c;j++){
                if((i*i + j*j)==c){
                    return true;
                }
           
            }
        }

        return false;
        
    }
};