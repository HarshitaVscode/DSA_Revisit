// Using only 1 extra array

class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        //Step-1 Create the Prev Greatest Elem Array
        vector<int>prev(n);
        prev[0] = -1;
        int maxi = height[0];
        for(int i=1; i<n; i++){
            prev[i] = maxi;
            maxi = max(maxi, height[i]);
        }

        //Step-2 Calculating the min of prev and nxt in the prev itself
        prev[n-1] = -1;
        int maxiR = height[n-1];
        for(int i = n-2; i>=0; i--){  
            prev[i] = min(prev[i], maxiR);
            maxiR = max(height[i], maxiR);
        }
        

        // Step-3 Subtract heights - prev
        int count = 0;
        for(int i=1; i<n-1; i++){
            if(height[i] < prev[i]) count += (prev[i] - height[i]);
        }

        return count;

    }
};