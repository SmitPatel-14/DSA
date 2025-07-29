class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xoro = 0;
        for(int i = 0;i<n;i++){
            xoro = xoro ^ nums[i];
        }
        return xoro;
    }
};