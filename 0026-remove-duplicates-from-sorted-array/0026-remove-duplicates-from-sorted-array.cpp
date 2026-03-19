class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;

    // k represents the index where the next unique element should be placed
    int k = 1; 

    for (int i = 1; i < nums.size(); i++) {
        // If current element is different from the last unique element
        if (nums[i] != nums[i - 1]) {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
    }
};