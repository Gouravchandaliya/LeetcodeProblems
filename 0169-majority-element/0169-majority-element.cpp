class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n<2) return nums[0];
        // unordered_map<int, int> frequencyMap;
        // for(int i = 0; i<n; i++){
        //     int num = nums[i];
        //     frequencyMap[num]++;
        //     if(frequencyMap[num] >= n/2) return frequencyMap[num];
        // }
        // return 1;
        int t = n/2;
        sort(nums.begin(), nums.end());
        int count = 1;
        for(int i = 0; i<n-1; i++){
            if(nums[i] == nums[i+1]){
                count++;
                if(count > n/2) return nums[i];
            }else{
                count = 1;
            }
        }
        return 0;
    }
};