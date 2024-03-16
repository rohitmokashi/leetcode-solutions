class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        unordered_map<int, int> mp;
        int count = 0, ans = 0, index = 0;
        mp[0] = -1;

        for (int i: nums) {
            if (i == 1) count++;
            else count--;

            if (mp.find(count) != mp.end() )
                ans = max (ans, index-mp[count] );
            else 
                mp[count] = index;
            index++;
        }

        return ans;
        
    }
};