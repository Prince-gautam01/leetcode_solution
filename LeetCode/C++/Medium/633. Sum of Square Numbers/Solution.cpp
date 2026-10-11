class Solution {
public:
    bool judgeSquareSum(int c) {

        // for(int i=1;i<c/2;i++){
        //     for(int j=i+1;j<c;j++){
        //         if((i*i + j*j)==c){
        //             return true;
        //         }
           
        //     }
        // }

        // return false;



        long long i=1;
        long long j=c;
        while(i<=j){

            long long sum=i*i + j*j;

            if(sum ==c){
                return true;
            }
            else if( sum >c){
                j--;
            }
            else if(sum<c){
                i++;
            }

        }

        return false;
        
    }
};