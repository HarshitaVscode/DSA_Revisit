class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int lo = 0;
        int hi = n-1;
        int mid;

        while(lo <= hi){
            mid = (lo + hi)/2;
            if(nums[mid] >= nums[hi]){
                lo = mid + 1;
            }
            else if(nums[mid] < nums[hi]){
                hi = mid;
            }
        }

        return nums[mid];
    }
};