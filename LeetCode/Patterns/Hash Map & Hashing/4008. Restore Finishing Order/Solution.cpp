class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        
        // vector<int> ans;
        // int n=order.size();
        // int m=friends.size();

        // for(int i=0;i<n;i++){
        //     for(int j=0;j<m;j++){
        //         if(order[i]==friends[j]){
        //             ans.push_back(order[i]);
        //         }

        //     }
        // }

        // return ans;



    vector<int> v;
     int n=order.size();
        int m=friends.size();
        int i=0;

        while(i< n){
        int s=0;
        int e=m-1;

            while(s<=e){

               int mid=(s+e)/2;
                if(order[i]==friends[mid]){
                    v.push_back(order[i]);
                }

                if(order[i]<friends[mid]){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            i++;

        }

        return v;
    }
};