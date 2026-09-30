class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        //Step-1 Find Pivot Element
        int idx = -1;
        for(int i=n-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                idx = i;
                break;
            }
        }

        //Step* Check if the Array is already greatest
        if(idx == -1){
            reverse(nums.begin(), nums.end());
            return;
        }

        //Step-2 Sort the array followed by idx (the remaining array)
        reverse(nums.begin()+idx+1, nums.end());

        //Step-3 Fininding Element just greater than idx in the remaining array
        int j = -1;
        for(int i=idx+1; i < n; i++){
            if(nums[i] > nums[idx]){
                j = i;
                break;
            }
        }

        //Step-4 Swapping idxth and jth elements
        swap(nums[j], nums[idx]);
        
    }
};