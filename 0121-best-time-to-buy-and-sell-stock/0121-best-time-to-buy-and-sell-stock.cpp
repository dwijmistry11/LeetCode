class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int smallN = INT_MAX;
        int saleToday = 0;
        int prof = 0;  
        for(int i=0; i<prices.size(); i++)
        {
            if(prices[i]<smallN)
            {
                smallN = prices[i];
            }
            saleToday = prices[i] - smallN;
            if(saleToday > prof)
            {
                prof = saleToday;
            }
        }
        return prof;
    }
};