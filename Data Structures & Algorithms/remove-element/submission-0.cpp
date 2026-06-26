class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int j = n-1;
        
        for(int i=0; i<=j ;i++){
            while(i<j && nums[j] == val){
                j--;
            }
            if(nums[i] == val){
                swap(nums[i],nums[j]);
                j--;
            }
        }
        return j+1;
        
    }
};