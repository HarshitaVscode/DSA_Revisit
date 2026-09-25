//method one

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int noz = 0, noo = 0;
        for(int i=0; i<n; i++){
            if(nums[i] == 0) noz++;
            else if(nums[i] == 1) noo++;
        }
        
        for(int i=0; i<n; i++){
            if(i < noz) nums[i] = 0;
            else if(i < noz + noo) nums[i] = 1;
            else nums[i] = 2;
        }
    }
};


//method 2 using 3 pointers
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int lo = 0, mid = 0, hi = n-1;

        while(mid <= hi){
            if(nums[mid] == 2){
                swap(nums[mid] , nums[hi]);
                hi--;
            }
            else if(nums[mid] == 0){
                swap(nums[mid], nums[lo]);
                lo++;
                mid++;
            }
            else if(nums[mid] == 1) mid++;
        }
    }
};