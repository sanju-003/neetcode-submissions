class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n,0);
        stack<pair<int,int>> stk;

        for(int i=n-1; i>=0; i--){
            while(!stk.empty() && temperatures[i] >= stk.top().first){
                stk.pop();
            }
            if(!stk.empty()){
                ans[i] = stk.top().second - i;
            }

            stk.push({temperatures[i], i});
        }

        return ans;
    }
};
