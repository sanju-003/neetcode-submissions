class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Brute 

        int n = prices.size();
        int maxpro = 0;
        for(int i=0; i< n; i++){
            int pro = 0;
            for(int j = i+1; j<n ;j++){
                pro = prices[j] - prices[i];
                maxpro = max(maxpro, pro);
            }
        }

        return maxpro;
    }
};
