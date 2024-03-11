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
                    cout << s << " " << i << " " << j << endl;
                if (s[j] == c) {
                    cout << "swapping " << c << endl;
                    swap (s[j], s[i]);
                    i++;
                }
            }
            
            // i++;
            // while (s[i] != s[i-1] || i<s.length()) {
            //     cout << i << endl;
            //     i++;
            // }
        }

        return s;
        
    }
};