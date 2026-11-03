class Solution {
public:
    vector<int> scoreValidator(vector<string>& events) {

        vector<int> v;
        int score=0;
        int counter=0;
        for(int i=0;i<events.size();i++){

            if(events[i]=="W" && counter<10){
                counter++;
            }
            else if((events[i]=="WD" || events[i]=="NB") && counter<10){
                score++;
            }
            else{
                if(counter<10){
                    score=score + stoi(events[i]);
                }
            }
           
        }

        v.push_back(score);
        v.push_back(counter);

        return v;

        
    }
};