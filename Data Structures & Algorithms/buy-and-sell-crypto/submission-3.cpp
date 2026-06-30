class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Sliding window
        int n = prices.size();
        int left =0;
        int right = left+1;
        int maxpro = 0;
        while(right<n){
            if(prices[right] - prices[left] > 0){
                maxpro = max(maxpro, prices[right] - prices[left]);
            }
            else{
                left = right;
            }
            // int pro = prices[right] - prices[left];
            // if(pro < 0){
            //     left = right;
            // }
            // maxpro = max(maxpro, pro);
            right++;
        }
        return maxpro;
        
    }
};
