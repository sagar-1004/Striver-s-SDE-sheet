class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxP=0;
        int b=prices[0];
        
        
        for(int i=1;i<prices.size();i++)
        {
            if(b>prices[i])
                b=prices[i];
            
            if(prices[i]-b>maxP)
                maxP=prices[i]-b;
        }
        
       
        return maxP;
        
        
        
    }
};