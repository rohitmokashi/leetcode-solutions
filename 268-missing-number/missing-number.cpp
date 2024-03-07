class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l = nums.size();
        int sum = (l * (l+1)) / 2;

        for (int i=0; i<l; i++) {
            sum -= nums[i];
        }

        return sum;

    }
};