class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        int  j = 0;
        int l1 = nums1.size(), l2 = nums2.size();

        for (int i=0; i<l1; i++){

            while ( j < l2 && nums2[j] <= nums1[i]) {
                if (nums1[i] == nums2[j]) {
                    return nums1[i];
                }    
                j++;
            }
        }
        return -1;
    }
};