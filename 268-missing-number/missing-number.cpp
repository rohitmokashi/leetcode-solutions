class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int l = nums.size();
        int req_sum = (l * (l+1)) / 2;
        int curr_sum = 0;

        for (int i=0; i<l; i++) {
            curr_sum += nums[i];
        }

        return req_sum-curr_sum;

    }
};