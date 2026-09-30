// Solution using 2 pointer approach

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int r = n-1;

        int lmax = 0;
        int rmax = 0;

        int count = 0;;

        while(l < r){
            if(height[l] <= height[r]){    //process left
                if(height[l] >= lmax) lmax = height[l];
                else{
                    count += lmax - height[l];
                }
                l++;
            }

            else{
                if(height[r] > rmax) rmax = height[r];
                else{
                    count += rmax - height[r];
                }
                r--;
            }
            
        }
        return count;

    }
};