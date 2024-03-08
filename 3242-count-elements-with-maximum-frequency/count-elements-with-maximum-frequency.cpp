class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int freq[101] = {0};
        int maxFreq = 0;
        for (int i=0; i<nums.size(); i++) {
            freq[nums[i]]++;
            if (freq[nums[i]] > maxFreq) maxFreq = freq[nums[i]];
        }
        
        int ans = 0;
        for (int i=1; i<101; i++) {
            if (freq[i] == maxFreq) {
                ans += freq[i];
            }
        }

        return ans;
    }
};