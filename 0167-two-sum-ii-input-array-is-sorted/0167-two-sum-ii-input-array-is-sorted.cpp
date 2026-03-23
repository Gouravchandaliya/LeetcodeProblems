class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s = 0; 
        int e = numbers.size()-1;
        int total = 0;
        while(s<e){
            total = numbers[s]+numbers[e];
            if(target == total){
                return {s+1,e+1};
            }
            else if(target > total){
                s++;
            }else{
                e--;
            }
        }
        return {};
    }
};