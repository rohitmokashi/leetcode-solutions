class Solution {
private:
    void swap (char& a, char& b) {
        char temp = a;
        a = b;
        b = temp;
    }
public:
    string customSortString(string order, string s) {

        string ans = "";

        int i = 0;
        for (char c: order) {
            while  (s[i] == c) i++;
            for (int j=i+1; j<s.length(); j++) {
                if (s[j] == c) {
                    swap (s[j], s[i]);
                    i++;
                }
            }
        }

        return s;
        
    }
};