class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int count = 0;
        if(s.length() < 1) return true;
        for(int j = 0; j<t.length(); j++){
            if(s[i] == t[j]){
                i++;
                count++;
                if(count == s.length()) return true;
            }
        }
        return false;
    }
};