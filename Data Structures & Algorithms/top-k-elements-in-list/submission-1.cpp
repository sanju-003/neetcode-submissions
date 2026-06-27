class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // bucket sorting 
        unordered_map<int,int> map;

        for(int x: nums){
            map[x]++;
        }

        vector<vector<int>> bucket(nums.size() +1);

        for(auto it: map){
            int freq = it.second;
            int value = it.first;
            bucket[freq].push_back(value);
        }
        vector<int> ans;
        for(int i = bucket.size() -1; i>=0; i--){
            for(int num : bucket[i]){
                ans.push_back(num);
            }

            if(ans.size() == k){
                return ans;
            }
        }

        return ans;
    }
};
