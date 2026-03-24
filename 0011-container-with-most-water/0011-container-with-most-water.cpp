class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0;
        int e = height.size() - 1;
        int maxStore = 0;
        while (s < e) {
            int currStore = min(height[s], height[e]) * (e - s);
            maxStore = max(currStore, maxStore);
            if(height[s]<height[e]){
                s++;
            }else{
                e--;
            }
        }
        return maxStore;
    }
};