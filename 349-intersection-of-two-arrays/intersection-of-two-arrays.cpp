class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(0);

        for (int i=0; i<nums1.size(); i++) {
            bool flag = true;
            for (int j=0; j<nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    if (flag){
                        ans.push_back(nums1[i]);
                        flag = false;
                    }
                    nums2[j] = -1;
                }
            }
        }

        return ans;
    }
};