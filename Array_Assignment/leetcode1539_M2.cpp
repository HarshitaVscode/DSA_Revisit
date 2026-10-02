// Binray Search Approach

class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int n = nums.size();
        int lo = 0;
        int hi = n-1;

        while(lo <= hi){
            int mid = (lo + hi)/2;

            int miss = nums[mid] - mid - 1;

            if(miss < k){
                lo = mid + 1;
            }

            else{
                hi = mid - 1;
            }
        }

        return lo + k;
    }
};