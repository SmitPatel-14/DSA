class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos, neg;
        
        // Separate positive and negative numbers
        for (int num : nums) {
            if (num > 0) pos.push_back(num);
            else neg.push_back(num);
        }
        
        vector<int> result(nums.size());
        int i = 0, p = 0, n = 0;
        
        // Place elements alternately starting with positive
        while (i < nums.size()) {
            if (i % 2 == 0) {
                result[i] = pos[p++];
            } else {
                result[i] = neg[n++];
            }
            i++;
        }
        
        return result;
    }
};
