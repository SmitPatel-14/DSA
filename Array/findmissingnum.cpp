//optimal
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 0; i <= n; i++) {
            int flag = 0; // Reset flag for each number i
            for (int j = 0; j < n; j++) {
                if (nums[j] == i) {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0) {
                return i; // If number i is not found in nums
            }
        }
        
        return -1; // Should never reach here
    }
};

//better
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> hash(n + 1, 0);
        for(int i=0;i<n;i++){
            hash[nums[i]]=1;
        }
        for(int i =0;i<=n;i++){
            if(hash[i]==0){
                return i;
            }
        }
        return -1;
    }
};

//optimal
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1))/2;
        int result = 0;
        for(int i =0;i<n;i++){
            result =result + nums[i];
        }
        return sum-result;
    }
};

