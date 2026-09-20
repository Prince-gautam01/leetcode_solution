class Solution {
public:
    int minPartitions(string n) {

        vector<int> v;
       
        int maxi=INT_MIN;
        for(int i=0;i<n.size();i++){


            int op=(n[i]-'0')*1;
            v.push_back(op);
             maxi=max(maxi,op);
      
        }


        return maxi;
        
    }
};