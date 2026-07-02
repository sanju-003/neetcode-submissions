class Solution {
public:

    bool hours(vector<int>& piles, int mid, int h){
        int hours = 0;
        for(int x: piles){
            hours += x/mid;
            if(x%mid != 0){
                hours++;
            }
        }
        return hours<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1, high = *max_element(piles.begin(), piles.end());

        while(high>= low){
            int mid = low + (high-low)/2;
            if(hours(piles, mid, h)){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }

        return low;
    }
};
