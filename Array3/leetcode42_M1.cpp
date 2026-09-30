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

        //Step-2 Create the Next Greatest ELem Array
        vector<int>nxt(n);
        nxt[n-1] = -1;
        int maxii = height[n-1];
        for(int i=n-2; i>=0; i--){
            nxt[i] = maxii;
            maxii = max(maxii, height[i]);
        }

        //Step-3 Creating a new array (min of prev and nxt)
        vector<int>neww(n);
        for(int i=0; i<n; i++){
            neww[i] = min(prev[i], nxt[i]);
        }

        // Step-4 Subtract heights - new elements
        int count = 0;
        for(int i=1; i<n-1; i++){
            if(height[i] < neww[i]) count += (neww[i] - height[i]);
        }

        return count;

    }
};