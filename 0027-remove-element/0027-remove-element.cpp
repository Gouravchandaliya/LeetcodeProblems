class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int i = 0;
        int k = 0;
        int n = nums.size();
        while(n--){
            if(nums[i]!=val){
                nums[k] = nums[i];
                i++;
                k++;
                count++;
            }else{
                i++;
            }
        }
        return count;
    }
};