class Solution {
public:
    int countIntersectingIntervals(vector<vector<int>>& intervals) {

        int cnt=0;

        for(int i=0;i<intervals.size()-1;i++){
            vector<int> temp=intervals[i];
            for(int j=i+1;j<intervals.size();j++){
                 vector<int> temp2=intervals[j];
                 if( max(temp[0], temp2[0]) <= min(temp[1],temp2[1])){
                    cnt++;
                 }

            }

        }
        return cnt;

        
    }
};