//brute
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n = nums.size();
        vector<int> result;
       for(int i =0;i<n;i++){
           for(int j=i+1;j<n;j++){
               if(nums[i]+nums[j]==target){
           result.push_back(i);
            result.push_back(j);      
               }
           }
       }
        return result;
    }
};

//better
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> mpp;
        
        for (int i = 0; i < n; i++) {
            int num = nums[i];
            int se = target - num;

            if (mpp.find(se) != mpp.end()) {
                return {mpp[se], i};
            }

            mpp[num] = i;
        }
        
        return {-1, -1}; // If no solution found
    }
};

//optimal
only for varity 2