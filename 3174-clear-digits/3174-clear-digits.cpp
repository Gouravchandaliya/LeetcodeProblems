class Solution {
public:
    string clearDigits(string s) {
        int si = s.size();
        int i = 0;
        while(i<si){
            if(isdigit(s[i])){
                s.erase(i, 1);
            
            if(i-1>=0){
                s.erase(i-1, 1);
                i--;
            }
        }else{
            i++;
        }
        }
        return s;
    }
};