class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Hash table
        int n = nums.size();
        unordered_map<int,int> map;
        for(int x: nums){
            map[x]++;
        }

        for(auto it : map){
            if(it.second > n/2){
                return it.first ;
            }
        }
        
    }
};