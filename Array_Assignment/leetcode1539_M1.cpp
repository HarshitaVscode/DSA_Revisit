
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int curr = 1;
        int miss = 0;

        int i =0;
        while(miss < k){
            if(i < arr.size() && arr[i] == curr){
                i++;
            }
            else{
                miss++;

                if(miss == k) return curr;
            }
            curr++;
        }
        return -1;
    }
};