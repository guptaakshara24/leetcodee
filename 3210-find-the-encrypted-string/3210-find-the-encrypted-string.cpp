class Solution {
public:
    string getEncryptedString(string s, int k) {
        string ans = "";

        for(int i = 0; i < s.length(); i++) {
            int index = (i + k) % s.length();

            ans = ans + s[index];
        }

        return ans;
    }
};