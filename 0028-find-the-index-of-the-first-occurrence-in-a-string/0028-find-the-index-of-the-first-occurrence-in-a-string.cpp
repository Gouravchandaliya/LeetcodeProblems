class Solution {
public:
    int strStr(string haystack, string needle) {
        int store = 0;
        int j=0;
        if(needle.size() == 0) return 0;
        for(int i=0; i<haystack.size(); i++){
            if(haystack[i] == needle[j]){
                store = i;
                while(i < haystack.size() &&
                  j < needle.size() && haystack[i] == needle[j]){
                    i++;
                    j++;
                    if(j==needle.size()) return store;
                }
                i=store;
                j=0;
            }
        }
        return -1;
    }
};