// Rotated SOrted Array Approach

class Solution {
public:
    void reverse(vector<int>& nums, int i, int j){
        while(i <= j){
            swap(nums[i], nums[j]);
            i++;
            j--;
        }
        
    }
    
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

        //Step-2 Now applying rotated array method
        reverse(nums, 0, idx-1);
        reverse(nums, idx, n-1);
        reverse(nums, 0, n-1);

        return nums[0];


    }
};