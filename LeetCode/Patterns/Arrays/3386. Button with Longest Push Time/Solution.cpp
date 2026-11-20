class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {

        int ans=INT_MIN;
        int but=INT_MAX;
        for(int i=0;i<events.size();i++){
            int time;
            if(i==0){
                time=events[i][1];
            }
            else{
                time=events[i][1]-events[i-1][1];

            }

            if(time>ans){
                ans=time;
                but=events[i][0];
            }
            else if(time==ans){
                  but=  min(but,events[i][0]);
            }
            
            

        }
        return but;



        
    }
};