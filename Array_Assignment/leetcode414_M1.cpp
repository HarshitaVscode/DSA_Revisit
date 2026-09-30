//Method-1 Using 3 traversals

#define ll long long int
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        ll n = nums.size();

        //Step-1 Calculating Maxi elem
        ll maxi = LLONG_MIN;
        for(int i=0; i<n; i++){
            if(maxi < nums[i]) maxi = nums[i];
        }

        //Step-2 Calculating smax
        ll smax = LLONG_MIN;
        for(int i=0; i<n; i++){
            if(smax < nums[i] && maxi != nums[i]){
                smax = nums[i];
            }
        }

        //Step-3 Calculating tmax
        ll tmax = LLONG_MIN;
        for(int i=0; i<n; i++){
            if(tmax < nums[i] && nums[i] != maxi && nums[i] != smax){
                tmax = nums[i];
            }
        }

        if(tmax != LLONG_MIN) return tmax;
        else return maxi;


    }
};