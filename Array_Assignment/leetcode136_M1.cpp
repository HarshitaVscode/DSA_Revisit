class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int>help(60005, 0);

        for(int i=0; i<n; i++){
            int idx = nums[i] + 30000;

            if(help[idx] == 0) help[idx] = 1;
            else help[idx] = 0;      
        }

        for(int i=0; i<=60005; i++){
            if(help[i] == 1) return i-30000;
        }

        return -1;
    }
};