class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int temp=money;

        sort(prices.begin(),prices.end()); 
        if((prices[0]+prices[1])<=money){
            money=money-(prices[0]+prices[1]);
            return money;
        }
        return temp;   
    }
};