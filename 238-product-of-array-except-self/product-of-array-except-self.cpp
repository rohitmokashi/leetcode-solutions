class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> ans(nums.size(), 0);
        int curr_pro = 1, zero_count = 0;

        for (int i: nums) {
            if (i != 0) {
                curr_pro *= i;
            } else {
                zero_count++;
            }

            if (zero_count > 1) {
                vector<int> ans_for_zeros(nums.size(), 0);
                return ans_for_zeros;
            }
        }

        if (zero_count == 1) {
            for (int i=0; i<nums.size(); i++) {
                if (nums[i] == 0) {
                    ans[i] = curr_pro;
                    return ans;
                }
            }
        }

        for (int i=0; i<nums.size(); i++) {
            ans[i] = curr_pro / nums[i];
        }
        return ans;
    }
};