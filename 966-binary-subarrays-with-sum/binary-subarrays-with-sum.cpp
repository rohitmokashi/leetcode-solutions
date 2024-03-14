class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int ans = 0;
        bool all_zeros = true;

        for (int i: nums) {
            if (i==1){
                all_zeros = false;
                break;
            }
        }

        if (all_zeros && goal==0) {
            return ((nums.size() * (nums.size()+1))/2);
        }

        for (int i=0; i<nums.size(); i++) {
            int sum = 0;
            for (int j=i; j<nums.size(); j++) {

                if (sum==goal && nums[j] == 0) {
                    ans++;
                    continue;
                }
                sum += nums[j];
                if (sum == goal) ans++;
                else if (sum > goal) break;
            }

            sum -= nums[i];
        }

        return ans;
        
    }
};