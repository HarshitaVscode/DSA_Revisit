class Solution {
public:  
    int findMin(vector<int>& nums) {

        //Step-1 Finding the pivot element
        int n = nums.size();
        int idx = -1;
        for(int i=1; i<n; i++){
            if(nums[i-1] > nums[i]){
                idx = i;
            }
        }

        if(idx == -1){  // sorted array
            return nums[0];
        }

        return nums[idx];
    }
};