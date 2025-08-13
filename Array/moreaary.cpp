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

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;
        
        // Step 1: Find the first index 'i' from the end where nums[i] < nums[i+1]
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }
        
        if (i >= 0) {
            // Step 2: Find index 'j' from the end where nums[j] > nums[i]
            int j = n - 1;
            while (nums[j] <= nums[i]) {
                j--;
            }
            // Step 3: Swap nums[i] and nums[j]
            swap(nums[i], nums[j]);
        }
        
        // Step 4: Reverse the suffix starting from i+1
        reverse(nums.begin() + i + 1, nums.end());
    }
};


