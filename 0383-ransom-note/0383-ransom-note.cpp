class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<int,int> freq;
        if(ransomNote.length()>magazine.length()) return false;
        for(int i=0; i<magazine.length(); i++){
            freq[magazine[i]]++;
        }
        for(int j=0; j<ransomNote.length(); j++){
            freq[ransomNote[j]]--;
            if(freq[ransomNote[j]] < 0) return false;
        }
        return true;
    }
};