class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        //Brute
        vector<int> ans;
        int n = temperatures.size();
        for(int i=0; i<n ;i++){
            int check = 0;
            for(int j=i+1; j<n;j++){
                if(temperatures[j] > temperatures[i]){
                    ans.push_back(j-i);
                    check = 1;
                }
                if(check == 1){
                    break;
                }
            }
            if(check == 0){
                ans.push_back(0);
            }
        }

        return ans;
    }
};
