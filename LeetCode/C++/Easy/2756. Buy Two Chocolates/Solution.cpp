class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int temp=money;
        int cnt=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<=money){
                money=money-prices[i];
                cnt++;

                if(cnt==2){
                    return money;
                }
            }
        }
        
        return temp;
    }
};