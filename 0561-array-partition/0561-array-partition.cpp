class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int add = 0;
        int i = nums.size()-1;
        int j = 0;
        while(i>=0){
            j = i-1;
            add = add+min(nums[i],nums[j]);
            i=i-2;
        }
        return add;
    }
};