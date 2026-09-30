#define ll long long int
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        ll m = LLONG_MIN;
        ll sm = LLONG_MIN;
        ll tm = LLONG_MIN;
        
        for(int i=0; i<n; i++){
            if(nums[i] > m){
                tm = sm;
                sm = m;
                m = nums[i];
            }
            else if(nums[i] < m && nums[i] > sm){
                tm = sm;
                sm = nums[i];
            }
            else if(nums[i] < m && nums[i] < sm && nums[i] > tm){
                tm = nums[i];
            }
        }

        if(tm != LLONG_MIN) return tm;
        else return m;
    }
};