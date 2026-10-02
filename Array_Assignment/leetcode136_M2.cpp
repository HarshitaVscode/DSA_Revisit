// keep these 3 properties in mind
// XOR of a number with itself is 0 (5 ^ 5 = 0)
// XOR of a number with 0 is the number itself (5 ^ 0 = 5)
// XOR is order-independent (a ^ b ^ c = c ^ a ^ b)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for(int ele : nums){
            ans ^= ele;
        }

        return ans;
    }
};