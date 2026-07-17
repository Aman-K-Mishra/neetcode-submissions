class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> bunty;
        for (char c: s) {
            bunty[c]++;
        }
        for (char c: t) {
            bunty[c]--;
            if (bunty[c]==0) bunty.erase(c); 
        }
        return bunty.empty(); 
    }
};
