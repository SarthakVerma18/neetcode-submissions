class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector <int> trackmax(prices.size(), 0);
        trackmax[prices.size() - 1] = 0;
        for(int i = prices.size() - 2; i>= 0;i--){
            trackmax[i] = max(trackmax[i+1], prices[i+1]);
        }
        int maxi = INT_MIN;
        for(int i =0 ;i< prices.size() ; i++){
            maxi = max(trackmax[i]-prices[i], maxi);
        }
        if(maxi<0)return 0;
        return maxi;
    }
};
