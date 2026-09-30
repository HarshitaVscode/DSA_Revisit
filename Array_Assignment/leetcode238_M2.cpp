//SPace optimised soltion : O(1) (excluding the output array)
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        //Step-1 Calculating prefix product
        vector<int>ans(n,1);
        for(int i=1; i<n; i++){
            ans[i] = ans[i-1] * nums[i-1];
        }

        //Step-2 Calculating prod in pre itself
        int post = 1;
        for(int i=n-2; i>=0; i--){
            post *= nums[i+1];
            ans[i] *= post;
        }

        return ans;
    }
};