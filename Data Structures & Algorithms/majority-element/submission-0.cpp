class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Brute
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int cnt = 1;
        int ele = 0;

        for(int i= 0; i<n-1 ;i++){
            if(nums[i] == nums[i+1]){
                cnt++;
            }
            else{
                if(cnt > n/2){
                    ele = nums[i];
                }
                cnt = 1;
            }
        }
        if(cnt > n/2){
            ele = nums[n-1];
        }
        return ele;
    }
};