//Approach : No need to calculate the factorial, just count the frequency of 5 that is the answer.

class Solution {
public:
    int trailingZeroes(int n) {
        int count = 0;

        while(n > 0){
            n /= 5;
            count += n;
        }
        return count;
    }
};