class Solution {
public:
    int pivotInteger(int n) {

        if (n==1) return 1;

        int i = 1, j = n;
        int l_sum = i, r_sum = j;
        i++;j--;
        
        while (i <= j) {
            if (l_sum == r_sum && i==j) return i;

            while (l_sum < r_sum) {
                l_sum += i;
                i++;
            }
            while (r_sum < l_sum) {
                r_sum += j;
                j--;
            }

            if (l_sum == r_sum && i<j) r_sum += j--;
            
        }

        return -1;
    }
};