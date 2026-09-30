class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        //Step-1 Calculating prefix product
        vector<int>pre(n);
        pre[0] = 1;
        for(int i=1; i<n; i++){
            pre[i] = pre[i-1] * nums[i-1];
        }

        //Step-2 Calculating suffix product
        vector<int>suf(n);
        suf[n-1] = 1;
        for(int  i = n-2; i>=0; i--){
            suf[i] = suf[i+1] * nums[i+1] ;
        }

        //Step-3 Product of both pref and suff
        for(int i=0; i<n; i++){
            nums[i] = pre[i] * suf[i];
        }

        return nums;
    }
};